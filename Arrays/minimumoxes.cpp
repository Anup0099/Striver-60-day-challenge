#include <bits/stdc++.h>
using namespace std;
int minimumBoxes(vector<int> &apple, vector<int> &capacity)
{
    int ans = 0;
    int n = apple.size();
    int m = capacity.size();
    int sum = accumulate(begin(apple), end(apple), 0);
    sort(begin(capacity), end(capacity), greater<int>());
    for (int i = 0; i < m; i++)
    {
        if (sum <= 0)
        {
            return ans;
        }
        sum -= capacity[i];
        ans++;
    }
    return ans;
}
int main() {}