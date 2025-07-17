// Trap Rain Water(Efficient Appraoch)
#include <iostream>
using namespace std;

int rain(int arr[], int n)
{
    int trapped = 0, lMax, rMax;
    int lBound[n], rBound[n];
    lBound[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lBound[i] = max(arr[i], lBound[i - 1]);
    }
    rBound[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rBound[i] = max(arr[i], rBound[i + 1]);
    }
    for (int i = 1; i < n; i++)
    {
        trapped += min(rBound[i], lBound[i]) - arr[i];
    }

    return trapped;
}

int main()
{
    // int a1[] = {5, 0, 6, 2, 3};
    int a1[] = {3, 2, 0, 5, 0, 2, 3};

    int n = (sizeof(a1) / sizeof(int));

    cout << rain(a1, n);
}
