// 8. String to Integer (atoi)
#include <iostream>

using namespace std;

int myAtoi(string s)
{
    if (s.empty())
        return 0;
    int ans = 0;
    int sign = 1;
    int i = 0;
    while (i < s.size() && s[i] == ' ')
    {
        i++;
    }
    if (i < s.size() && (s[i] == '+' || s[i] == '-'))
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    while (i < s.size() && isdigit(s[i]))
    {
        int digit = s[i] - '0';

        if (ans > (INT_MAX - digit) / 10)
            return sign == 1 ? INT_MAX : INT_MIN;

        ans = ans * 10 + digit;
        i++;
    }

    return ans * sign;
}

int main()
{
    string str = " -042";
    cout << myAtoi(str);
    return 0;
}