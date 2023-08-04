#include <bits/stdc++.h>
using namespace std;
// Bob has given two integer arrays as christmas gift to Alice. Alice is wandering how to make these arrays equal. help alice to make these two arrays equal
// given two arrays a={a1,a2,a3..}
// and b={b1...bn}
// you can perform the operation on array a o or more times
// state whether both array can be made equal after a finite number of operation
// select any two inidice i and j such i!=j and set ai=ai+2 and aj=aj-2
// print -1 if both arrays cannot be made equal
long long makeSimilar(int n, vector<int> &nums, vector<int> &target)
{
    sort(nums.begin(), nums.end());
    sort(target.begin(), target.end());

    vector<int> oddNums, evenNums, oddTar, evenTar;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            evenNums.push_back(nums[i]);
        }
        else
        {
            oddNums.push_back(nums[i]);
        }
        if (target[i] % 2 == 0)
        {
            evenTar.push_back(target[i]);
        }
        else
        {
            oddTar.push_back(target[i]);
        }
    }

    long ans = 0;
    for (int i = 0; i < oddNums.size(); i++)
    {
        ans += abs((oddNums[i] - oddTar[i])) / 2;
    }
    for (int i = 0; i < evenNums.size(); i++)
    {
        ans += abs((evenNums[i] - evenTar[i])) / 2;
    }
    // result array is not equal to target array return -1
    if (ans % 2 != 0)
    {
        return -1;
    }
    // result array is equal to target array return ans/2
    return ans / 2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = ;
    vector<int> a = {17, 1};
    vector<int> b = {7, 11};
    cout << makeSimilar(n, a, b);
}