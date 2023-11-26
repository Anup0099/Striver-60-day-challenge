#include <bits/stdc++.h>
using namespace std;
int totalFruit(vector<int> &fruits)
{
    int n = fruits.size();
    int i = 0, j = 0;
    map<int, int> mp;
    int ans = 0;
    while (j < n)
    {
        mp[fruits[j]]++;
        if (mp.size() <= 2)
        {
            ans = max(ans, j - i + 1);
        }
        else
        {
            while (mp.size() > 2)
            {
                mp[fruits[i]]--;        // decrement the count of the fruit at i
                if (mp[fruits[i]] == 0) // if count becomes 0, remove it from the map
                {
                    mp.erase(fruits[i]); // erase the fruit from the map
                }
                i++;
            }
        }
        j++;
    }
    return ans;
}

int main() {}