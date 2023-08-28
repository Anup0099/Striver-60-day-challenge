#include <bits/stdc++.h>
using namespace std;
// Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.
// vector<int> leaders(vector<int>a, int n)
// {
//     vector<int> ans;

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[j]>a[i])
//             {
//                 ans.push_back(a[j]);
//                 a.erase(a.begin()+j);
//             }
//         }
//     }
//     ans.push_back(a[n-1]);
//     return ans;
// }
vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    int max = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            ans.push_back(max);
        }
    }
    reverse(begin(ans), end(ans));

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[] = {16, 17, 4, 3, 5, 2};
    vector<int> v;
    v = leaders(a, 6);
    for (auto it : v)
    {
        cout << it << " ";
    }
}