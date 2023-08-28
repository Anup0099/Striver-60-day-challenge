#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int longestSequence(vector<int> &arr)
{
    int n = arr.size();
    sort(begin(arr), end(arr));
    int longest = 1;
    int count = 1;
    int lastNumber = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastNumber)
        {
            count++;
            lastNumber = arr[i];
        }
        else if (arr[i] != lastNumber)
        {
            count = 1;
            lastNumber = arr[i];
        }
        longest = max(longest, count);
    }
    return longest;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}