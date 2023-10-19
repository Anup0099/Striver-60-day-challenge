#include <bits/stdc++.h> 
using namespace std;
// consdier an array of n tickets prices, tickets A number m is defined as the size of som  subsequence of tickets where each element covers an unbroken range of integers that is if the elements in s are sorted the absolute difference between any elements s[i] and s[i+1] is either 0 or 1 return the size of the longest tickets A in tickets   determine the maximum length of subsequence chosen from the tickets array
int main() {
    int n;
    cin>>n;
    vector<int> tickets(n);
    for(int i=0;i<n;i++){
        cin>>tickets[i];
    }
    sort(tickets.begin(),tickets.end());
    int ans=0;
    int i=0;
    while(i<n){
        int j=i;
        while(j<n-1&&tickets[j+1]-tickets[j]<=1){
            j++;
        }
        ans=max(ans,j-i+1);
        i=j+1;
    }
    cout<<ans<<endl;
} 