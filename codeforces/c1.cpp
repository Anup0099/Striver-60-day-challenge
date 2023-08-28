#include <bits/stdc++.h>
using namespace std;
// You are given an array consisting of n
//  integers. Your task is to determine whether it is possible to color all its elements in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored.

// For example, if the array is [1,2,4,3,2,3,5,4
// ], we can color it as follows: [1,2,4,3,2,3,5,4
// ], where the sum of the blue elements is 6
//  and the sum of the red elements is 18
// and the sum of the red elements is 18
// .

// Input
// The first line contains an integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case begins with a line containing an integer n
//  (2≤n≤50
// ) — the length of the array a
// .

// The next line contains n
//  integers a1,a2,…,an
//  (1≤ai≤50
// ) — the elements of the array a
// .

// Output
// For each test case, output "YES" (without quotes) if it is possible to color the array in two colors in such a way that the sums of the elements of both colors have the same parity and each color has at least one element colored, and "NO" otherwise.

// You can output "Yes" and "No" in any case (for example, the strings "yES", "yes", and "Yes" will be recognized as correct answers).

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        int odd = 0, even = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < x; i++)
        {
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}