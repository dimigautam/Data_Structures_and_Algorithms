// 1021. Remove Outer Parentheses
#include <iostream>

using namespace std;

string removeOuterParentheses(string s)
{
    string result;
    int level = 0;
    for (char elem : s)
    {
        if (elem == '(')
        {
            if (level++)
            {
                result += elem;
            }
        }
        else
        {
            if (--level)
            {
                result += elem;
            }
        }
    }
    return result;
}
int main()
{

    string str = "(()())(())";
    cout << removeOuterParentheses(str);
    return 0;
}