#include <bits/stdc++.h>
using namespace std;
void fact(int n)
{
    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fact(20);
}