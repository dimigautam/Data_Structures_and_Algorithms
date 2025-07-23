
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> vect = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> vect = {5, 4, -1, 7, 8};
    cout << maxSubArray(vect);

    return 0;
}