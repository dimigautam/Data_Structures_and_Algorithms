#include <iostream>
using namespace std;

int removeDuplicates(int *arr, int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int j = 0; j < res; j++)
    {
        arr[j] = temp[j];
    }

    for (int k = 0; k < res; k++)
    {
        cout << arr[k];
    }

    return res;
}

int removeDuplicates2(int *arr, int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int k = 0; k < res; k++)
    {
        cout << arr[k];
    }
    return res;
}

int main()
{
    int a1[] = {1, 2, 2, 4, 5, 6, 9, 9};
    int n = (sizeof(a1) / sizeof(int));

    removeDuplicates2(a1, n);
}