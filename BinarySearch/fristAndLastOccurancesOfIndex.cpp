#include <bits/stdc++.h>
using namespace std;
vector<int> firstAndLastOccurance(vector<int> &arr, int k)
{
    int n = arr.size();
    int first = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
    int last = upper_bound(arr.begin(), arr.end(), k) - arr.begin();

    if (first == n || arr[first] != k)
    {
        return {-1, -1};
    }
    else
    {
        return {first, last - 1};
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 5, 6, 7};
    int k = 5;
    vector<int> ans = firstAndLastOccurance(arr, k);
    cout << ans[0] << " " << ans[1];
}