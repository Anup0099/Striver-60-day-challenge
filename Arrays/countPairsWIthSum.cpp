#include <bits/stdc++.h>
using namespace std;
int getCountSum(int arr[], int n, int k)
{
    map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = k - arr[i];
        if (m.find(x) != m.end())
        {
            count += m[x];// if the element is present in the map then add the frequency of that element to the count
        }
        
    }
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    return count;
}
int main() {}