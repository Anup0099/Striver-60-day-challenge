#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> &v)
{
    int n = v.size();
    // count the set bits and sort the array according to the number of set bits
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int x = v[i];
        while (x)
        {
            count++;

            x = x & (x - 1); // this is the fastest way to count the number of set bits in a number here we are using the fact that x & (x-1) will unset the rightmost set bit of x and we will do this until x becomes 0 and we will count the number of times we are doing this and that will be the number of set bits in x
        }
        c[i] = count;
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    cout << "\n";
    // now we will sort the array according to the number of set bits
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[c[i]].push_back(v[i]);
    }
    for (auto i : m)
    {

        for (auto j : i.second)
        {
            cout << j << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v = {5, 2, 3, 9, 4, 6, 7, 15, 32};
    sort(v);
}