#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }
    return -1;
}
int main() {}