// 344. Reverse String
#include <iostream>
#include <vector>

using namespace std;

void reverseStr(vector<char> &str)
{
    int st = 0, end = str.size() - 1;
    while (st < end)
    {
        swap(str[st++], str[end--]);
    }
}
int main()
{
    vector<char> vect = {'h', 'e', 'l', 'l', 'o'};
    reverseStr(vect);
    for (char ch : vect)
    {
        cout << ch;
    }

    return 0;
}