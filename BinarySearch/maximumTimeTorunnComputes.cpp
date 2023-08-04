#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> &batteries, long long mid, int n)
{

    long long result = n * mid;
    long long sum = 0;
    for (int i = 0; i < batteries.size(); i++)
    {
        result -= min((long long)batteries[i], mid);
        if (result <= 0)
        {
            return 0;
        }
    }
    return false;
}
long long maxRuntime(int n, vector<int> &batteries)
{
    int m = batteries.size();
    int sum = 0;
    accumulate(batteries.begin(), batteries.end(), sum);
    int low = *min_element(begin(batteries), end(batteries));
    int right = sum / n;
    long long result = 0;
    while (low <= right)
    {
        long long mid = low + (right - low) / 2;
        if (possible(batteries, mid, n))
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}