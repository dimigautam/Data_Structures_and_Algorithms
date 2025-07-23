#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i : nums)
    {
        if (freq == 0)
        {
            ans = i;
        }
        freq += (i == ans) ? 1 : -1;
    }
    return ans;
}

int main()
{
    // vector<int> vect = {2, 2, 1, 1, 1, 2, 2};
    vector<int> vect = {3, 2, 3};
    cout << majorityElement(vect);

    return 0;
}