#include <bits/stdc++.h>
using namespace std;
int armstring(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n = 153;
    cout << armstring(n);
}