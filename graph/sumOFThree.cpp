#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n<7)cout<<"NO"<<endl;
        int x = 1;
        int y = 2;
        int z = n - 3;

        if (z % 3 == 0)
        {
            y += 2;
            z -= 2;
        }
        
    }
}