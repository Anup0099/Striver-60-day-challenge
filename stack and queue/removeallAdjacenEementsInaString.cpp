#include <bits/stdc++.h>
using namespace std;
 string removeDuplicates(string s) {
        stack<char>st;
        int n= s.length();
        for(int i=0;i<n;i++){
          
            if( st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }else{
                st.pop();
            }
        }
        string s1="";
       while(!st.empty()){
           s1.push_back(st.top());
           st.pop();
       }
        reverse(s1.begin(),s1.end());
        return s1;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}