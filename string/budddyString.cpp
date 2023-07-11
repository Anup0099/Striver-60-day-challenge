#include <bits/stdc++.h>
using namespace std;
bool buddyStrings(string s,string goal){
    int n= s.size();
    int m= goal.size();
    if(n!=m){
        return false;
    }
    if(s==goal){
        unordered_set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        if(st.size()<n){
            return true;
        }
        return false;
    }
    vector<int>diff;
    for(int i=0;i<n;i++){
        if(s[i]!=goal[i]){
            diff.push_back(i);
        }
    }
    if(diff.size()==2){
        if(s[diff[0]]==goal[diff[1]] && s[diff[1]]==goal[diff[0]]){
            return true;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}