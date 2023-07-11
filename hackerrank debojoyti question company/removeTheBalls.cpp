#include <bits/stdc++.h>
using namespace std;
int removeBalls(vector<int>&color,vector<int>&radius){
    stack<pair<int,int>>st;
    int n=color.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push({color[i],radius[i]});
        }else{
            auto tp= st.top();
            if(tp.first==color[i] && tp.second==radius[i]){
                st.pop();
            }else{
                st.push({color[i],radius[i]});
            }
        }
    }
    return st.size();

    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>color={31, 6, 3, 48, 84, 18, 57, 73, 4 ,4 ,73, 4, 4, 4, 4};
    vector<int>radius={53, 23, 44, 61, 96, 1, 97, 15, 83, 97, 97, 97, 83, 97, 97};
    cout<<removeBalls(color,radius);
}