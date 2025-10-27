// 3. Longest Substring Without Repeating Characters
#include <iostream>
#include <set>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    set<char> chrs;
    int ans = 0;
    int start = 0, end = 0;

    while (end < s.size())
    {
        // If s[end] is already in the set, remove from the start until it isn’t
        if (chrs.find(s[end]) != chrs.end())
        {
            chrs.erase(s[start]);
            start++;
        }
        else
        {
            chrs.insert(s[end]);
            ans = max(ans, (int)chrs.size());
            end++;
        }
    }

    return ans;
}

int main()
{
    string str = "pwwkew";

    cout << lengthOfLongestSubstring(str);
    return 0;
}