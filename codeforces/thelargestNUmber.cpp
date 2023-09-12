#include <bits/stdc++.h> 
using namespace std;
// You are given a string 
//  of length 
//  which consists of digits from 0 to 9. You need to find an index 
//  such that the sub number formed by 
//  is divisible by 
//  and the xor of all the digits in the sub number formed by 
//  is maximum. If there are multiple 
//  such that 
//  is divisible by 
//  and for all such values of 
// , 
//  is maximum, then print the largest sub number.

// (For example: If the string is 611234, then for i = 2, two sub number will be [6], [11234] and for i = 3, two sub number will be [61], [1234], for i = 4, two sub number will be [611], [234] and so on. So you have to select 
//  such that 2nd sub number should be divisible by a given integer 
// , and bitwise xor of all the digits of the 1st sub number is maximum. If there multiple 
//  then print the largest 2nd sub number.)

// The sub number 
//  should not contain any leading zeros and the value of 
//  should not be 
// . Both the sub numbers 
//  and 
//  should contain at least one digit. If no answer exists, print 
// . 
int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;
        cin>>s;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int x=s[i]-'0';
            if(x%k==0)
            {
                ans=i;
                break;
            }
        }
        if(ans==-1)
        {
            cout<<-1<<endl;
            continue;
        }
        int sum=0;
        for(int i=0;i<=ans;i++)
        {
            sum+=s[i]-'0';
        }
        if(sum%k==0)
        {
            cout<<s.substr(0,ans+1)<<endl;
            continue;
        }
        
    }
} 