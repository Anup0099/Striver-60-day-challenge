#include <bits/stdc++.h> 
using namespace std;
void count(string s)
{
    int n=s.length();
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second;
    }

} 
int main() 
{
    cout<<"rai";
} 