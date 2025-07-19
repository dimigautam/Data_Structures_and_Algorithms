// Stock Buy and Sell
#include <iostream>
using namespace std;

int stock(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }

    return profit;
}

int main()
{
    int a1[] = {1, 5, 3, 1, 10, 8};

    int n = (sizeof(a1) / sizeof(int));

    cout << stock(a1, n);
}