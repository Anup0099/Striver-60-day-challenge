#include <bits/stdc++.h>
using namespace std;
int bestTimeToSellStocks(vector<int> &prices)
{
    int n = prices.size();

    int maxProfit = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        mini= min(mini,prices[i]);
        maxProfit=max(maxProfit,prices[i]-mini);
    }
    return maxProfit;
}
int bestTime(vector<int> &prices)
{
    int n = prices.size();
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            // find minimum price before ith day
            // and maximum profit gained by selling
            // at ith day
            if (prices[i] > prices[j])
                maxProfit = max(maxProfit,prices[i] - prices[j]);
        }
    }
    return maxProfit;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << bestTimeToSellStocks(prices);
}