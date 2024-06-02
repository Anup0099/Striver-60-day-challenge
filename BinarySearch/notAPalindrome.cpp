#include <bits/stdc++.h>
using namespace std;
// given a palindromic string s of size n geek has to replace a character in the string such that the resultant string string is not a paliddrome anymore.If there are no such strings then return -1
bool ispallindrome(string s)
{
    int n = s.size();

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
string smallestString(int n, string s)
{
    string ans = "";
    if(count(s.begin(),s.end(),s[0])==n)
    {
        return "-1";
    }
    if (ispallindrome(s))
    {
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] != 'a')
            {
                s[i] = 'a';
                return s;
            }
        }
    }
    s[0] = 'b';
    return s;
}
int main()
{
    int n = 5;
    string s = "cabbac";
    cout << smallestString(n, s) << endl;
    return 0;
}