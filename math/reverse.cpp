#include <bits/stdc++.h>
using namespace std;
int rever(int n)
{
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        ans = ans * 10 + temp;
    }
    return ans;
}
int main() {}