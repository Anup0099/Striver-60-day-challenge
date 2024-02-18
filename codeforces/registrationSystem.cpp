#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<string, int> st;
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        if (st.find(arr[i]) == st.end())
        {
            st[arr[i]] = 1;
            ans.push_back("OK");
        }
        else
        {
            string temp = arr[i] + to_string(st[arr[i]]);
            ans.push_back(temp);
            st[arr[i]]++;
        }
    }
    for (auto it : ans)
    {
        cout << it << endl;
    }
}