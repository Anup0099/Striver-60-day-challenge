#include <bits/stdc++.h> 
using namespace std;
string reverse(string s)
{
    string ans="";
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        
        ans= s[i]+ans;


    }
    return ans;

} 
int main() 
{
    string s="anup";
    cout<<s.substr(1,3);
    cout<<reverse(s);
} 