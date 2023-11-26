#include <bits/stdc++.h>
using namespace std;
int kthSymbolInGrammer(int n, int k)
{
    int mid = pow(2, n - 3) / 2;
    if (n == 1 and k == 1)
    {
        return 0;
    }

    if (k <= mid)
    {
        return kthSymbolInGrammer(n - 1, k);
    }
    else
    {
        return !kthSymbolInGrammer(n - 1, k - mid);
    }
}
int main() {}