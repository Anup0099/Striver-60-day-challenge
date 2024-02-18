#include <bits/stdc++.h>
using namespace std;
int atoi(string s)
{
    int n = s.size();
    int ans = 0;
    int sign = 1;
    int i = 0;
    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }
    for (; i < n; i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            ans = ans * 10 + (s[i] - '0'); // s[i]-'0' is used to convert character to integer
        }
        else
        {
            return -1;
        }
    }
    return ans * sign;
}
int main() 
{
    string s = "-21a";
    cout << atoi(s);
    return 0;
}