#include <bits/stdc++.h>
using namespace std;
// In the bustling CodeChef office, the entrance is equipped with a high-tech card swipe system. Each employee is assigned a unique ID card that they use to swipe in and out of the building.

// The system records every swipe, capturing the first swipe of an ID as in, second as out, third as in, and so on. Given an array
// �
// A consisting of
// �
// N IDs denoting
// �
// N swipes throughout the day, find the maximum number of people in the office at any time.

// Note that there is nobody inside the office before the first swipe.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer
// �
// N — the number of swipes throughout the day.
// The next line contains
// �
// N space-separated integers denoting the ID of the
// �
// �
// ℎ
// i
// th
//   swipe.
// Output Format
// For each test case, output on a new line, the maximum number of people in the office at any time.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t; // number of test cases
    while (t--)
    {
        int n;
        cin >> n; // number of swipes
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; // id of the ith swipe
        }
        set<int> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(arr[i]) == s.end())
            {
                s.insert(arr[i]);
            }
            else
            {
                s.erase(arr[i]);
            }
            ans = max(ans, (int)s.size());
        }
        cout << ans << endl;
    }
}