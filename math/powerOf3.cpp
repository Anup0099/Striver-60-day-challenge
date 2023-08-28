#include <bits/stdc++.h>
using namespace std;
bool power(int n, int k)
{
    if (k == 1)
        return true;
    if (k % n != 0)
        return false;
    return power(n, k / n);
}
vector<int> check(vector<int> arr)
{
    vector<int> v;
    for (int i = 0; i < arr.size(); i++)
    {
        if (power(3, arr[i]))
        {
            v.push_back(arr[i]);
        }
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> ans = {3, 9};
    vector<int> c = check(ans);
    for (auto it : c)
    {
        cout << it << " ";
    }
}