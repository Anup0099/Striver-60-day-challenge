#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &b, int k)
{
    int n = b.size();
    int banana = 0;
    for (int i = 0; i < n; i++)
    {
        banana += ceil((double)b[i] / (double)k);
    }
    return banana;
}
int minEatingSpeed(vector<int> b, int h)
{
    int n = b.size();
    int banana = 1;
    int maxi = *max_element(begin(b), end(b));
    int low = 1, high = maxi;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int totalh = solve(b, mid);
        if (totalh <= h)
        {
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> b = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(b, h) << endl;
    return 0;
}