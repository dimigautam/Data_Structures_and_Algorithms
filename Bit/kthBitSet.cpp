// Kth Bit is set or not
#include <iostream>
using namespace std;

/* bool KthBitSet(int n, int k) // left shift
{
    if (n & (1 << (k - 1)) != 0)
        return true;
    else
        return false;
} */

bool KthBitSet(int n, int k) // right shift
{
    if ((n >> (k - 1)) & 1 == 1)
        return true;
    else
        return false;
}

int main()
{
    int n = 5;
    int k = 3;
    cout << boolalpha; // Enable boolalpha
    cout << KthBitSet(n, k);
    cout << noboolalpha; // Disable boolalpha
    return 0;
}