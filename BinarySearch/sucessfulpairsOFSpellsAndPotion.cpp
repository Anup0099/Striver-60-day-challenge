#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
{
    int n = spells.size();
    int m = potions.size();
    sort(potions.begin(), potions.end());
    vector<int> ans;
    long long maxPortion = potions[m - 1];
    for (int i = 0; i < n; i++)
    {
        long long spell = spells[i];
        int low = 0, high = m - 1;
        int count = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if ((spell * potions[mid])%mod  >= success)
            {
                count = m - mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (count != 0)
        {
            ans.push_back(count);
        }
        else
        {
            ans.push_back(0);
        }
    }
    return ans;
}
int main()
{

    //     [1,2,3,4,5,6,7]
    // [1,2,3,4,5,6,7]
    // 25
    vector<int> spells = {1, 2, 3, 4, 5, 6, 7};
    vector<int> potions = {1, 2, 3, 4, 5, 6, 7};

    long long success = 25;
    vector<int> ans = successfulPairs(spells, potions, success);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}