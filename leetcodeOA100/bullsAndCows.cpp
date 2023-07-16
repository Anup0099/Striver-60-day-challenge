#include <bits/stdc++.h>
using namespace std;
string getHints(string secret,string guess){
    int n= secret.size();
    int m= guess.size();
    int bulls=0,cows=0;
    vector<int>g(10),s(10);
    for(int i=0;i<n;i++){
        if(secret[i]==guess[i])bulls++;
        else{
            g[guess[i]-'0']++;
            s[secret[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        cows +=min(g[i],s[i]);
    }
     string ans= to_string(bulls)+"A"+to_string(cows)+"B";
     return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}