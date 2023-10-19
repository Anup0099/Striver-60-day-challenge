#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(vector<int> &arr)
{
    int n = arr.size();
    bool flag = true;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] % 2 == 0 and arr[i - 1] % 2 == 0 and arr[i + 1] % 2 == 0 || arr[i] % 2 != 0 and arr[i + 1] % 2 != 0 and arr[i - 1] % 2 != 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr2(n - 1);
    vector<int> arr3(n - 2);
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());
    sort(arr3.begin(), arr3.end());
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> arr3[i];
    }
    // when all array is sorted then we can find the missing element by using only one loop becuase we know that the element which is missing is not present in the sorted array but if array is not sorted then we have to use two loops to find the missing element because we don't know where the missing element is present in the array so we have to check every element of the array to find the missing element in the array and we can't use binary search because binary search only works on sorted array .
    int one, two;
    // check if element present in arr is not present in arr2
    for (int i = 0; i < n; i++)
    {
        // if (find(arr2.begin(), arr2.end(), arr[i]) == arr2.end())
        // {
        //     one = arr[i];
        //     break;
        // }
        // int find = binary_search(arr2.begin(), arr2.end(), arr[i]);
        // if (find == 0)
        // {
        //     one = arr[i];
        //     break;
        // }
        if (arr[i] != arr2[i])
        {
            one = arr[i];
            break;
        }
    }
    // check if element present in arr2 is not present in arr3
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            if (arr2[i] != arr3[j])
            {
                two = arr2[i];
                break;
            }
        }
    }

    cout << one << " " << two << "\n";
}
int find_missing(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size(), m = arr2.size();
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return arr1[i];
        }
    }
    return arr1[n - 1];
}
int minimum_operations(vector<int> &arr)
{
    int n = arr.size();
    sort(begin(arr), end(arr));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int minimum = arr[i];
        for (int j = 0; j < n; j++)
        {
            arr[j] -= minimum;
            cout << arr[j];
        }
        cout << "\n";
        if (arr[i] <= 0)
        {
            count++;
        }
    }
    return count;
}
bool check_whetherKtimes(vector<int> &arr, int k)
{
    int n = arr.size();
    // sort(begin(arr), end(arr));
    // bool flag = false;
    // for (int i = 0; i < n; i++)
    // {
    //     int first = arr[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] * 2 == arr[j])
    //         {
    //             flag = true;
    //             break;
    //         }
    //     }
    // }
    // return flag;
    sort(begin(arr), end(arr));
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] * k == arr[mid + 1])
        {
            return true;
        }
        else if (arr[mid] * k > arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr = {2, 3, 6};
    cout << check_whetherKtimes(arr, 2);
}