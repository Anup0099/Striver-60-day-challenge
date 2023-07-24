#include <bits/stdc++.h>
using namespace std;
vector<int> twoPointers(vector<int> &arr, int target)
{
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] > target)
        {
            right--;
        }
        else if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {
            return {left, right};
        }
    }
    return {-1, -1};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}