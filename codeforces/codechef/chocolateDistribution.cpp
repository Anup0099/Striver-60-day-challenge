#include <bits/stdc++.h>
using namespace std;
// chef has a total of n>=4 chocolates  he decided to distribute them into three jars such that atleast one jar has odd number of chocolates   exactly two jars have same number of chocolates  every jar has at least one chocolate  find  a valid distribution of chocolates for chef . example 4 output 2 1 1  example 7 output 2 3 2 example 11 output 3 3 5
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<1<<" "<<1<<" "<<(n-2)<<endl;
    }
}