#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[low] <= arr[mid])
        {
            // left sorted
            if (target >= arr[low] && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] <= arr[high])
        {
            // right sorted
            if (target >= arr[mid] && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}