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
int compress2(vector<char> &chars)
{
    int n = chars.size();
    int index = 0, i = 0;
    while (i < n)
    {
        int count = 0;
        char curr_char = chars[i];
        while (i < n and chars[i] == curr_char)
        {
            count++;
            i++;
        }

        chars[index] = curr_char;
        index++;

        if (count > 1)
        {
            string count_str = to_string(count);
            for (auto &it : count_str)
            {
                chars[index] = it;
                index++;
            }
        }
        
    }
    return index;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress2(chars);
}
