#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &v)
{
    int n = v.size();
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int maxi = *max_element(begin(v), end(v));
    int total = (n* (maxi + 1)) / 2;
    return total - sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}