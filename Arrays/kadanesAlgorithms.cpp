#include <bits/stdc++.h>
using namespace std;
int kadanesAlgorithms(vector<int> &arr)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > maxi)
            sum = maxi;
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}