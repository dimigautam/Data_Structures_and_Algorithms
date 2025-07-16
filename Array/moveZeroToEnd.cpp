#include <iostream>

using namespace std;

int moveZeroToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k];
    }

    return count;
}

int main()
{
    int a1[] = {1, 2, 0, 4, 0, 6, 0, 9};
    int n = (sizeof(a1) / sizeof(int));
    moveZeroToEnd(a1, n);

    return 0;
}