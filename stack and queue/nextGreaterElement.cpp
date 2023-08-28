#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> arr)
{
    // brute force
    int n = arr.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j += j % n)
        {
            if (arr[j] > arr[i])

            {

                a[i] = arr[j];

                break;
            }
        }
    }
    return arr;

    // optimized
    int n=arr.size();
    stack<int> s;
    vector<int> v(n);

    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() and s.top()<=arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            v[i]=-1;
        }
        else
        {
            v[i]=s.top();
        }
        s.push(arr[i]);
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // vector<int> ar = {6, 2, 3};
    // vector<int> v;
    // v = nextGreater(ar);
    // for (auto it : v)
    // {
    //     cout << it << endl;
    // }
    int flag = 0;
    string a, b;
    cin >> a >> b;
    int l1 = a.length();
    int l2 = b.length();
    for (int i = 0; i < l1; i++)
    {
        int k = 0;
        while (k < l2 and b[k] != '#')
        {
            if (b[k] != a[i + k])
            {
                flag = 0;
                break;
            }
            k++;
            flag = 1;
        }
        if (flag == 1)
        {
            cout << i + 1;
        }
    }
    return 0;
}