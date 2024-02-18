#include <bits/stdc++.h>
using namespace std;
int minimumNumberOfCoins(vector<int> &coins, int target)
{
    int n = coins.size();
    int ob = 0, added = 0;
    sort(coins.begin(), coins.end());
    for (auto coin : coins)
    {
        while (coin > ob + 1)
        {
            added++;
            int newcoin = ob + 1;
            ob += newcoin;
            if (ob >= target)
                return added;
        }
        ob += coin;
        if (ob >= target)
            return added;
    }
    while (ob < target)
    {
        added++;
        int newcoin = ob + 1;
        ob += newcoin;  
    }
    return added;
}
int main()
{
    vector<int> coins = {1, 4, 10};
    int target = 19;
    cout << minimumNumberOfCoins(coins, target);
}