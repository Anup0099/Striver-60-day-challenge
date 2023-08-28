#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    // Write your code here.
    deque<int> dq;
    int i;
    // here we have to print the maximum element of the window of size k
    // so we will use a deque to store the index of the elements in the window
    // and we will store the elements in the deque in decreasing order
    // so the front of the deque will always contain the maximum element of the window
    // and the rear of the deque will always contain the minimum element of the window
    for(i=0;i<k;i++)
    {
        dq.push_back(arr[i]);

    }
    for(;i<n;i++)
    {
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty() and dq.front()<=i-k)
        {
            dq.pop_front();
        }
        
    }
    cout<<arr[dq.front()]<<"\n";
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}