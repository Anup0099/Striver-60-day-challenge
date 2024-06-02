#include <bits/stdc++.h>
using namespace std;
// There is a ribbon divided into n
//  cells, numbered from 1
//  to n
//  from left to right. Each cell either contains a chip or is free.

// You can perform the following operation any number of times (possibly zero): choose a chip and move it to the closest free cell to the left. You can choose any chip that you want, provided that there is at least one free cell to the left of it. When you move the chip, the cell where it was before the operation becomes free.

// Your goal is to move the chips in such a way that they form a single block, without any free cells between them. What is the minimum number of operations you have to perform?

// Input
// The first line contains one integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case consists of two lines:

// the first line contains one integer n
//  (2≤n≤50
// ) — the number of cells;
// the second line contains n
//  integers a1,a2,…,an
//  (0≤ai≤1
// ); ai=0
//  means that the i
// -th cell is free; ai=1
//  means that the i
// -th cell contains a chip.
// Additional constraint on the input: in each test case, at least one cell contains a chip.

// Output
// For each test case, print one integer — the minimum number of operations you have to perform so that all chips form a single block without any free cells between them.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countZero = 0;
        int countOne = 0;
        // count the number of 0s between 1s
        int first = 0;
        int last = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                first = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==1)
            {
                last = i;
                break;
            }
        }
        for(int i=first;i<=last;i++)
        {
            if(arr[i]==0)
            {
                countZero++;
            }
        }
        cout<<countZero<<endl;
        
    }
}