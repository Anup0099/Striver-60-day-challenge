#include <bits/stdc++.h>
using namespace std;
// emtage takes an array of positive integers and threshold value.the goal is to count the number unordered pair elements in the array whose sum of the number of set bits in the binary representation of their bitwise or and bitwise and is greater than the threshold value.
int countPairs(vector<int> arr, int threshold)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int b = arr[j];
            int x = a | b;
            int y = a & b;
            int count1 = __builtin_popcount(x);
            int count2 = __builtin_popcount(y);
            if (count1 + count2 > threshold)
            {
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr = {3, 1, 9, 8};
    int threshold = 3;
    cout << countPairs(arr, threshold);
}