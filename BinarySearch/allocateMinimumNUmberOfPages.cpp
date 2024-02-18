#include <bits/stdc++.h>
using namespace std;
int findStudent(vector<int> arr, int n, int mid)
{
    int student = 1, countPages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + countPages <= mid)
        {
            countPages += arr[i];
        }
        else
        {
            student++;
            countPages = arr[i];
        }
    }
    return student;
}

int findPages(vector<int> arr, int n, int m)
{
    int ans = 0;
    int low = *max_element(begin(arr), end(arr));
    int high = accumulate(begin(arr), end(arr), 0);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int student = findStudent(arr, n, mid);
        if (student <= m)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;
    cout << findPages(arr, n, m) << endl;
    return 0;
}