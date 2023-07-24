#include <bits/stdc++.h>
using namespace std;
bool IsMean(int ind, int k, int x, vector<int> &arr)
{
    int n = arr.size();
    sort(begin(arr), end(arr));
    int low = 0, high = n - 1;
    int sum = 0;
    for (auto it : arr)
    {

        sum += it;
    }
    int target = (n * x) - sum;
    // int s = sum;

    while (low < high)
    {
        sum = sum - (arr[low] + arr[high]);
        sum += (arr[low] * k + arr[high] * k);
        if (sum > x)
        {
            high--;
        }
        else if (sum < x)
        {
            low++;
        }
        else if (sum == x)
        {
            return true;
        }
        // s = sum;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}