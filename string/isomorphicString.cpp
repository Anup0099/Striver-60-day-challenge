#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    if(s.size()!=t.size()) return false;
    unordered_map<char,char> mp;
    unordered_set<char> st;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end()){
            if(mp[s[i]]!=t[i]) return false;
        }
        else{
            if(st.find(t[i])!=st.end()) return false;
            mp[s[i]]=t[i];
            st.insert(t[i]);
        }
    }
    return true;
}

int main() {
    string s="foo",t="bar";
    cout<<isIsomorphic(s,t);
}