#include <bits/stdc++.h>
using namespace std;
int nMeetingInARoom(int start[], int end[], int n)
{
    int ans = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(end[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(start[i] + 1) != s.end())
        {
            ans++;
        }
    }
    
    return ans;
}
int main()
{
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);
    cout << nMeetingInARoom(start, end, n);
}