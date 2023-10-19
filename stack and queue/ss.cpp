#include <bits/stdc++.h> 
using namespace std;
// given a binary string consists of characters '0' and '1' only
// Sample Input For Custom Testing

// STDIN

// FUNCTION

// 011

// →

// binary = "011".

// Sample Output

// 3

// Explanation

// Given binary = "011".

// Distinct subsequences of the string are 0, 1, 01, 11.

// • Their corresponding decimal representations are 0, 1, 1, 3.


// • Distinct decimal numbers are 0, 1, 3.
void solve(int ind , string s, string ans)
{
    if(ind==s.length())
    {
        cout<<ans<<endl;
        return;
    }
    solve(ind+1,s,ans+s[ind]);
    solve(ind+1,s,ans);
}
int solve(string s)
{
    // what we have to find? we have to find the number of distinct subsequences of the string
    // what is the subsequence of the string? subsequence of the string is the string formed by deleting some characters of the string
    int ans = 0;
    int n = s.length();
     solve(0, s, ans);
}
int main() {
    string s;
    cin>>s;
    cout<<solve(s);
} 