#include <bits/stdc++.h>
using namespace std;
int trailingZeroes(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        // run a loop from 1 to n and count the number of 5s in each number
        int j = i;
        while (j % 5 == 0)
        {
            //if the number is divisible by 5, increase the count and divide the number by 5
            count++;
            j /= 5;
            cout<<j<<endl;
            // keep dividing the number by 5 until it is divisible by 5
        }
    }

    return count;
}
int trailingZero(int n)
{
    // the number of times n is divisible by 5 gives the number of trailing zeroes in n!
    return trailingZeroes(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<2%5<<"rem"<<endl;
    int n;
    cin>>n;
    cout<<trailingZero(n)<<endl;
}