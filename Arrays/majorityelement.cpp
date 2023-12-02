#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> arr)
{
    int n = arr.size();
    int element;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        element = arr[i];
        count = 1;
        if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            element = arr[i + 1];
        }
        else if (count > n / 2)
        {
            return element;
        }
    }
    return element;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 14, 14};
    cout << majorityElement(arr);
    return 0;
}