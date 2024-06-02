#include <bits/stdc++.h>
using namespace std;
// Math exam was held on two sections (A & B) of class fifth. Each section's teacher prepared a separate list of marks in non-decreasing order. But Head of department requested a combined list for both sections keeping the order same (non-decreasing)

// Lists are in the form of arrays of integers

// Input: Section A (10, 15, 32, 37, 39, 40, 67, 87, 97)

// Section B [5, 11, 33, 43, 47, 67, 68)

// Output: [5, 10, 11, 15, 32, 33, 37, 39, 40, 43, 47, 67, 67, 68, 87, 971

vector<int> combine(vector<int> &A, vector<int> &B)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            ans.push_back(A[i]);
            i++;
        }
        else
        {
            ans.push_back(B[j]);
            j++;
        }
    }
    while (i < A.size())
    {
        ans.push_back(A[i]);
        i++;
    }
    while (j < B.size())
    {
        ans.push_back(B[j]);
        j++;
    }
    return ans;
}

int main()
{
    vector<int> A = {10, 15, 32, 37, 39, 40, 67, 87, 97};
    vector<int> B = {5, 11, 33, 43, 47, 67, 68};
    vector<int> ans = combine(A, B);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}