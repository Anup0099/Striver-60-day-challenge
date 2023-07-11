#include <bits/stdc++.h>
using namespace std;
// There are n
//  nails driven into the wall, the i
// -th nail is driven ai
//  meters above the ground, one end of the bi
//  meters long rope is tied to it. All nails hang at different heights one above the other. One candy is tied to all ropes at once. Candy is tied to end of a rope that is not tied to a nail.

// To take the candy, you need to lower it to the ground. To do this, Rudolph can cut some ropes, one at a time. Help Rudolph find the minimum number of ropes that must be cut to get the candy.

// The figure shows an example of the first test: the candy is tied to the rope tied to the nail at height 3

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            v.push_back({a,b});
        }
        int cunt=0;
       for(int i=0;i<n;i++){
        if(v[i].first>v[i].second){
            cunt++;
        }

       }
       cout<<cunt;
        
    }
}