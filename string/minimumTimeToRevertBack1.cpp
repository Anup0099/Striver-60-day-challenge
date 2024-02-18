#include <bits/stdc++.h>
using namespace std;
bool same(string s, string t)
{
    int n = s.size();
    int m = t.size();
    for (int i = 0; i < n - m; i++)
    {
        if (s[i] != t[i])
        {
            return false;
        }
    }
    if (t.size() == 0)
    {
        return true;
    }
    return true;
}
int minimumTimeToInitialState(string word, int k)
{
    int n = word.size();
    for (int i = k; i < n; i++)
    {
        if (word.substr(0, i) == word.substr(i, n - i))
        {
            return i / k;
        }
    }
    return n / k;
}
int main()
{
    string word = "abaaa";
    cout<<word.size()<<endl;
    cout << word.substr(0, 5) << endl;
    cout << word.substr(4, 5) << endl;
}