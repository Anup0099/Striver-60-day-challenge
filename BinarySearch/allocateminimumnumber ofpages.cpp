#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr, int pages, int students)
{
    int count = 0;
    int sumAllAllocated = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (sumAllAllocated + arr[i] > pages)
        {
            count++;
            sumAllAllocated = arr[i];
            if (sumAllAllocated > pages)
                return false;
        }
        else
        {
            sumAllAllocated += arr[i];
        }
    }
    if(count<students)return true;
    return false;
}

int minimumNUmberOFpages(vector<int> arr, int b)
{
    int n = arr.size();
    int low = *min_element(begin(arr), end(arr));
    int high = accumulate(begin(arr), end(arr), 0);
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (isPossible(arr, mid, b))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}