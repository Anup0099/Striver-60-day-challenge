#include <bits/stdc++.h>
using namespace std;
string solve(vector<string> &nums, string ans, int i, int n)
{
    // what is i  in this case? i is the length of the string ans is the string that we are generating and n is the length of the string that we want to generate i.e. n = 2^nums.size()
    //  generate all possible binary strings of length n and check if it is present in nums or not if not then return it
    if (i == n)
    {
        if (find(nums.begin(), nums.end(), ans) == nums.end()) // if ans is not present in nums then return it
        {
            return ans;
        }
        return "";
    }
    string temp1 = solve(nums, ans + "0", i + 1, n);
    cout << temp1 << endl;
    if (temp1 != "")
    {
        return temp1;
    }
    string temp2 = solve(nums, ans + "1", i + 1, n);
    if (temp2 != "")
    {
        return temp2;
    }
    return "";
}
// sort an array using recursion
void sortArray(vector<int> &nums, int i, int n)
{
    // base case
    if (i == n)
    {

        return;
    }
    // recursive case
    int minIndex = i;
    for (int j = i + 1; j < n; j++) // find the minimum element in the array from i to n and swap it with the element at i
    {
        if (nums[j] < nums[minIndex])
        {
            minIndex = j;
        }
    }
    swap(nums[i], nums[minIndex]); // swap the element at i with the minimum element
    sortArray(nums, i + 1, n);     // sort the array from i+1 to n
    // this sorting is called selection sort
}
int fibonacciseries(int n, int i, int a = 0, int b = 1)
{
    
}

string findDifferentBinaryString(vector<string> &nums)
{
    int n = nums.size();
    string ans = "";
    return solve(nums, ans, 0, n);
}
int main()
{
    cout << fibonacciseries(10, 0) << endl;
}