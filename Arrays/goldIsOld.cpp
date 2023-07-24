#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
long long MaxXP(int n, int k, int initial_exp, vector<int> &exp_req, vector<int> &exp_gain)
{

    long long sum = 0;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back({exp_req[i], exp_gain[i]});
    }
    sort(arr.begin(), arr.end(), comp);
    int j;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i].first <= initial_exp)
        {
            sum = initial_exp + arr[i].second;
        }
        j++;
        if (j == k)
            break;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 5, k = 3, exp = 10;
    vector<int> v1 = {2, 4, 1, 2};
    vector<int> v2 = {3, 6, 2, 4};
    cout << MaxXP(n, k, exp, v1, v2);
}