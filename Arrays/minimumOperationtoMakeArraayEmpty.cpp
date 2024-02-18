#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    int res = 0;
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
        int freq = it.second;
        if (freq == -1)
        {
            return -1;
        }
        res += ceil((double)freq / 3);
    }
    return res;
}

double squareRootBinarySearch(double x, double epsilon = 1e-6)
{
    if (x < 0)
    {
        // Handle negative numbers (NaN for simplicity in this example)
        return std::numeric_limits<double>::quiet_NaN();
    }

    double low = 0.0;
    double high = x;
    double mid;

    while ((high - low) > epsilon)
    {
        mid = low + (high - low) / 2;
        double square = mid * mid;

        if (square > x)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }

    return low;
}

int main()
{
    int n;
    cin >> n;

    cout << fixed << setprecision(1) << squareRootBinarySearch(n) << endl;
}
