#include <iostream>
using namespace std;

int maxElement(int arr[], int n)
{
    int max = arr[0], secMax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i] >= secMax)
        {
            secMax = arr[i];
        }
    }
    return secMax;
}

int main()
{
    int a1[] = {1, 2, 3, 2, 4, 5, 6, 9, -1, 2, 1};
    int n = (sizeof(a1) / sizeof(int)) - 1;
    cout << maxElement(a1, n);
}