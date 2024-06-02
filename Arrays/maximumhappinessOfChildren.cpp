#include <bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int> &happiness, int k)
{
    int n = happiness.size();
    sort(begin(happiness), end(happiness), greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        sum += happiness[i] - i;
        ans += sum;
        k--;
        if (k == 0)
        {
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> happiness = {1, 2, 3};
    int k = 2;
    cout << maximumHappinessSum(happiness, k);
    return 0;
}