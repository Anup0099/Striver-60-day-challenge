#include <bits/stdc++.h>
using namespace std;
// For a sequence
// �
// X of length
// �

// (
// �
// ≥
// 3
// )
// L (L≥3), we call
// �
// X a concussive sequence if and only if:

// For all
// �

// (
// 1
// <
// �
// <
// �
// )
// i (1<i<L),
// �
// �
// −
// 1
// <
// �
// �
// >
// �
// �
// +
// 1
// X
// i−1
// ​
//  <X
// i
// ​
//  >X
// i+1
// ​
//   or
// �
// �
// −
// 1
// >
// �
// �
// <
// �
// �
// +
// 1
// X
// i−1
// ​
//  >X
// i
// ​
//  <X
// i+1
// ​
//   holds.
// You're given a sequence
// �
// A of length
// �
// N.
// Your task is to rearrange
// �
// A to make it a concussive sequence.

// If multiple such rearrangements exist, print any. If no such rearrangement exists, output
// −
// 1
// −1 instead.
bool verify(vector<int> &v)
{
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1] && v[i] > v[i - 1])
            continue;
        if (v[i] < v[i + 1] && v[i] < v[i - 1])
            continue;

        return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n), c(n);
        sort(begin(a), end(a));
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            if (ind >= n)
                ind = 1;

            b[ind] = a[i];
            cout << ind << " " << a[i] << endl;

            ind += 2;
        }
        ind = 1;
        for (int i = 0; i < n; i++)
        {
            if (ind >= n)
                ind = 0;
            c[ind] = a[i];
            ind += 2;
        }
        vector<int> ans = {-1};
        if (verify(b))
            ans = b;
        if (verify(c))
            ans = c;
        // for (auto x : ans)
        //     cout << x << " ";
        // cout << endl;
    }
}

vector<int> wiggleSort(int n, vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        else
        {
            if (arr[i + 1] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    return arr;
}