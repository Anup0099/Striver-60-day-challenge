/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<vector<int>> &matrix, int k)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int count = 0;
    vector<int> arr;
    // priority_queue<int> pq;
    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pq.push(matrix[i][j]);
            
        }
    }
    while (!pq.empty())
    {
        arr.push_back(pq.top());
        pq.pop();
    }
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return arr[arr.size() - 1];
}
int kthSmallest2(vector<vector<int>>&matrix, int k)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int ans = 0;
    int l=matrix[0][0], r=matrix[n-1][m-1];
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]<=mid)
                    count++;
                else
                    break;
            }
        }
        if(count>=k)
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> matrix = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    int k = 8;
    cout << kthSmallest2(matrix, k) << endl;
}