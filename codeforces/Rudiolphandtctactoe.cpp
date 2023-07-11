#include <bits/stdc++.h>
using namespace std;
bool checker(vector<vector<char>>&v,char c){
    int n=v.size();
    for(int i=0;i<3;i++){
        bool a= true;
        bool b= true;
        for(int j=0;j<3;j++){
            if(v[i][j]!=c)a=false;
            if(v[j][i]!=c)b=false;
        }
        if(a||b)return true;
    }
    if(v[0][0]==c&&v[1][1]==c&&v[2][2]==c)return true;
    if(v[0][2]==c&&v[1][1]==c&&v[2][0]==c)return true;
    return false;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int  t;cin>>t;
    while(t--){
      vector<vector<char>>v(3,vector<char>(3));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>v[i][j];
            }
        }
        if(checker(v,'X'))cout<<'X'<<endl;
        else if(checker(v,'O'))cout<<'O'<<endl;
        else if(checker(v,'+'))cout<<'+'<<endl;
        else cout<<"Draw"<<endl;

    }
}