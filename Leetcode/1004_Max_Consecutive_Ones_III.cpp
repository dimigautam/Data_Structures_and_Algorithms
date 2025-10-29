// 1004. Max Consecutive Ones III
#include <iostream>
#include <vector>

using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int ans = 0;
    int i = 0, j = 0, z = 0;
    while (j < nums.size())
    {
        if (nums[j] == 0)
        {
            z++;
        }

        if (z > k)
        {
            if (nums[i] == 0)
                z--;
            i++;
        }
        ans = max(j - i + 1, ans);
        j++;
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << longestOnes(vec, k);
    return 0;
}