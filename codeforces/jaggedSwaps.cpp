#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            arr2[i] = arr[i];
        }
        if(arr[0]!=1)
        {
            cout<<"NO"<<endl;

        }
       
    }
}
