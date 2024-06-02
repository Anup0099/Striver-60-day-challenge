#include <bits/stdc++.h>
using namespace std;
int sumOfElements(vector<int> &arr, int k1, int k2)
{
    int n = arr.size();
    priority_queue<int> maxHeap, maxHeap2;
    for (int i = 0; i < n; i++)
    {
        maxHeap.push(arr[i]);
        if (maxHeap.size() > k1)
        {
            maxHeap.pop();
        }
    }
    int sum1 = maxHeap.top();

    for (int i = 0; i < n; i++)
    {
        maxHeap2.push(arr[i]);
        if (maxHeap2.size() > k2)
        {
            maxHeap2.pop();
        }
    }
    int sum2 = maxHeap2.top();

    cout << sum1 << " " << sum2 << endl;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sum1 && arr[i] < sum2)
        {
            ans += arr[i];
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 3, 5, 11, 12, 15};
    int k1 = 3, k2 = 6;
    cout << sumOfElements(arr, k1, k2) << endl;
    return 0;
}