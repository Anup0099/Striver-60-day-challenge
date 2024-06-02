#include <bits/stdc++.h>
using namespace std;
char ar[1000000];
int getCost(int l, int r, char ch)
{
    int count = 0;
    for (int i = l; i <= r; i++)
    {
        if (ar[i] != ch)
        {
            count++;
        }
    }
    return count;
}
int getMin(int l, int r, char ch)
{
    if (l == r)
    {
        if (ar[l] == ch)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    int mid = (l + r) / 2;
    int left = getCost(l, mid, ch) + getMin(mid + 1, r, ch + 1);
    int right = getCost(mid + 1, r, ch) + getMin(l, mid, ch + 1);
    return min(left, right);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            ar[i] = s[i];
        }
        cout << getMin(0, n - 1, 'a') << endl;
    }
}

// Let's dry run the code for the given test cases in a detailed manner:

// Test case: bbdcaaaa

// The function getMin(0, 7, 'a') is called. The string is split into two halves bbdc and aaaa. The cost of making the first half 'a'-good is calculated by getCost(0, 3, 'a') which returns 4 (all characters need to be changed) and the cost of making the second half 'b'-good is calculated by getCost(4, 7, 'a') which returns 0 (it's already 'a'-good). The function then recursively calls getMin(4, 7, 'b') for the second half with 'b'. The process continues until the base case is reached. The minimum cost is returned, which is 4.

// Test case: asdfghjk

// The function getMin(0, 7, 'a') is called. The string is split into two halves asdf and ghjk. The cost of making the first half 'a'-good is calculated by getCost(0, 3, 'a') which returns 4 and the cost of making the second half 'b'-good is calculated by getCost(4, 7, 'a') which returns 4. The function then recursively calls getMin(0, 3, 'b') and getMin(4, 7, 'b') for both halves with 'b'. The process continues until the base case is reached. The minimum cost is returned, which is 7.

// Test case: ceaaaabb

// The function getMin(0, 7, 'a') is called. The string is split into two halves ceaa and aabb. The cost of making the first half 'a'-good is calculated by getCost(0, 3, 'a') which returns 2 and the cost of making the second half 'b'-good is calculated by getCost(4, 7, 'a') which returns 2. The function then recursively calls getMin(0, 3, 'b') and getMin(4, 7, 'b') for both halves with 'b'. The process continues until the base case is reached. The minimum cost is returned, which is 4.

// Test case: bbaaddcc

// The function getMin(0, 7, 'a') is called. The string is split into two halves bbaa and ddcc. The cost of making the first half 'a'-good is calculated by getCost(0, 3, 'a') which returns 2 and the cost of making the second half 'b'-good is calculated by getCost(4, 7, 'a') which returns 4. The function then recursively calls getMin(0, 3, 'b') and getMin(4, 7, 'b') for both halves with 'b'. The process continues until the base case is reached. The minimum cost is returned, which is 6.

// Test case: z

// The function getMin(0, 0, 'a') is called. Since the length of the string is 1, the base case is reached. The cost of making the string 'a'-good is 1 (the character needs to be changed), so 1 is returned.

// Test case: ac

// The function getMin(0, 1, 'a') is called. The string is split into two halves a and c. The cost of making the first half 'a'-good is calculated by getCost(0, 0, 'a') which returns 0 and the cost of making the second half 'b'-good is calculated by getCost(1, 1, 'a') which returns 1. The function then recursively calls getMin(1, 1, 'b') for the second half with 'b'. The base case is reached and the cost is 1, so 1 is returned.