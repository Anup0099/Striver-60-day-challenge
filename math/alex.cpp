#include <bits/stdc++.h>
using namespace std;
int solve(int rank, vector<int> inp, vector<int> np)
{
    set<int> s;
    for (int i = 0; i < inp.size(); i++)
    {
        s.insert(inp[i]);
    }
    vector<int> v;
    // get  the rank of the current player
    for (auto it : s)
    {
        v.push_back(it);
    }
    int sum = v[v.size() - rank];
    for (int i = 0; i < np.size(); i++)
    {
        s.insert(np[i]);
        v.push_back(np[i]);
        sum += v[v.size() - rank];
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int rank = 2;
    vector<int> inp = {1, 2};
    vector<int> np = {3, 4};
    cout << solve(rank, inp, np) << endl;
}