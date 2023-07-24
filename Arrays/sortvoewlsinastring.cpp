#include <bits/stdc++.h>
using namespace std;
bool vowelOrConsonant(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u')
        return true;
    else
        return false;
}
bool comp(char ch, char chh) { return int(ch) <= int(chh); }

string sortVowels(string s)
{
    vector<char> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (vowelOrConsonant(s[i]) == true)
        {
            v.push_back(s[i]);
        }
    }
    string newString = "";
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < s.length(); i++)
    {
        if (vowelOrConsonant(s[i]) == true)
        {
            newString += v[i];
        }
        else
        {
            newString += s[i];
        }
    }
    return newString;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}