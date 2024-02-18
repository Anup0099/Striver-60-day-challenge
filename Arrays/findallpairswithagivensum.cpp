#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    vector<pair<int, int>> ans;
    sort(A, A + N);
    sort(B, B + M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i] + A[j] == X)
            {
                ans.push_back({A[i], A[j]});
            }
        }
    }
    return ans;
}
// Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form:

// arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n].

// NOTE: If your transformation is correct, the output will be 1 else the output will be 0.
void zigZag(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        else
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}
long long int minValue(int a[], int b[], int n)
{
    sort(A, A + n);
    sort(B, B + n, greater<int>());
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (A[i] * B[i]);
    }
    return ans;
}
int minimumNumberOfJumps(int arr[], int n)
{
    int jump = 1;
    int maxReach = arr[0];
    int steps = arr[0];
    if (arr[i] == 0)
    {
        return -1;
    }
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (i >= n - 1)
            return jump;
        steps--;
        maxReach = max(maxReach, i + arr[i]);
        if (steps == 0)
        {
            jump++;
            if (i >= maxReach)
            {
                return -1;
            }
            steps = maxReach - i;
        }
    }
    return -1;
}
void sortInto(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count1; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count1; i < count2 + n; i++)
    {
        arr[i] = 2;
    }
}
int main()
{

    int arr[] = {0, 0, 0, 1, 1, 1, 2};
}