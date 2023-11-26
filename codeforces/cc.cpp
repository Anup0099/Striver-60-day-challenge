#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l ,int r,int x)
{
    if(r>=l)
    {
        int mid = l + (r-l)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]>x)
        {
            return binarySearch(arr,l,mid-1,x);
        }
        return binarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int main()
{
    int num[] = {20, 50, 10, 70, 40, 80};
    int t = 0, i, j;
    for (i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            t = num[j];
            num[j] = num[i];
            num[i] = t;
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << num[i] << " ";
    }
}