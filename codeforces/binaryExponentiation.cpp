#include <bits/stdc++.h>
using namespace std;
long long binaryPower(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = binaryPower(a, b / 2);
    if (b % 2 == 0)
    {
        return res * res;
    }
    else
    {
        return res * res * a;
    }

}
int main() {
    long long a=2,b=5;
    cout<<binaryPower(a,b);
}