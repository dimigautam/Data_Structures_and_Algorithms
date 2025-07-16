#include <iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
    int a2[n] = {0};
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        a2[j] = arr[i];
        j++;
    }
    for (int k = 0; k < n; k++)
    {
        cout << a2[k];
    }

    return 0;
}

int main()
{
    int a1[] = {1, 2, 3, 2, 4, 5, 6, 9, 9};
    int n = (sizeof(a1) / sizeof(int));
    reverseArray(a1, n);
}