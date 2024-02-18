#include <bits/stdc++.h>
using namespace std;
int antsOnTheBoundary(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    int sum = 0;
    int count = 0;
    while (i < n)
    {
        sum += arr[i];
        if (sum == 0)
        {
            count++;
            sum = 0;
        }
        i++;
    }
    return count;
}
int main()
{
    vector<int> arr = {3,2,-3,-4};
    cout << antsOnTheBoundary(arr);
}