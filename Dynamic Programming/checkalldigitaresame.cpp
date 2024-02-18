#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    while (n)
    {
        int rem = n % 10;
        cout << rem << endl;
        sum += n % 10;

        n /= 10;
    }
    return sum;
}
vector<int> leftrotate(vector<int> arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}
vector<int> leftrotateByd(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
    return arr;
}
void moveZeroes(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        else
        {
            continue;
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int>arr = {1, 2, 3, 0, 5};
    moveZeroes(arr);
}