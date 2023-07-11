#include <bits/stdc++.h>
using namespace std;
int getHints(string secret,string hints){
    int n= secret.size();
    int m= hints,size();
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
    return to_String(bulls)+"A"+to_String(cows)+"B";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}