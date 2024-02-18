#include <bits/stdc++.h>
using namespace std;
vector<int> nse(vector<int> &arr)
{
    int n = arr.size();
    stack<int> s;
    vector<int> ar(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() and s.top() >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ar[i] = -1;
        }
        else
        {
            ar[i] = s.top();
        }
        s.push(arr[i]);
    }
    
    return ar;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> v;
    v = nse(arr);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}