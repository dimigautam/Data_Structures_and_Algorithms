// 151. Reverse Words in a String
#include <iostream>
#include <sstream>

using namespace std;

string reverseWords(string s)
{
    stringstream ss(s);
    string result, word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--)
    {
        result += words[i];
        if (i != 0)
        {
            result += " ";
        }
    }

    return result;
}

int main()
{

    string str = "the sky is blue";
    cout << reverseWords(str);
    return 0;
}