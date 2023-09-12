#include <bits/stdc++.h>
using namespace std;
// You are given an integer n
// . On each step, you may subtract one of the digits from the number.

// How many steps are required to make the number equal to 0
// ?

// Input

// The only input line has an integer n
// .

// Output

// Print one integer: the minimum number of steps.
int solve(int n)
{
   int ans=0;
    while(n>0)
    {
         int temp=n;
         int maxi=0;
         while(temp>0)
         {
              maxi=max(maxi,temp%10);
              temp/=10;
         }
         n-=maxi;
         ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout<<solve(n);
}