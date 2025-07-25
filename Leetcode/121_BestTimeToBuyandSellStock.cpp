// 121. Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &prices)
{
    int profit = 0, bestBuy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
        {
            profit = max(profit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return profit;
}

int main()
{
    // vector<int> vect = {2, 2, 1, 1, 1, 2, 2};
    vector<int> vect = {7, 1, 5, 3, 6, 4};
    cout << majorityElement(vect);

    return 0;
}