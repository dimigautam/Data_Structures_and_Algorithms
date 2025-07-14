#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6, 9, 9};
    int n = (sizeof(a1) / sizeof(int));
    printf("%s", checkSorted(a1, n) ? "true" : "false");
}