#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
   
    map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[chars[i]]++;
    }
    string ans = "";

    for (auto it : m)
    {
        ans += it.first; 
        if (it.second > 1)
        {
            ans += to_string(it.second);
        }
    }
    vector<char> v;
    for (int i = 0; i < ans.size(); i++)
    {
        v.push_back(ans[i]);
    }
    chars.resize(v.size()); // resize() changes the size of the vector
    for (int i = 0; i < v.size(); i++)
    {
        chars[i] = v[i];
        cout << chars[i] << " ";
    }

    return chars.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars);
}
