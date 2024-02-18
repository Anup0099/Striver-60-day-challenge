#include <bits/stdc++.h>
using namespace std;
// You are given two positive integers x and y.

// In one operation, you can do one of the four following operations:

// Divide x by 11 if x is a multiple of 11.
// Divide x by 5 if x is a multiple of 5.
// Decrement x by 1.
// Increment x by 1.
// Return the minimum number of operations required to make x and y equal.

int minimumOperationToMakexandYequal(int x, int y)
{
    vector<int> dist(10000, INT_MAX);
    queue<int> q;
    q.push(x);
    dist[x] = 0; // dist[x] means minimum number of operation to make x equal to x
    while (!q.empty())
    {
        int temp = q.front();
        if (temp == y)
            return dist[y];
        q.pop();
        if (temp % 11 == 0 and dist[temp / 11] > dist[temp] + 1)
        {
            dist[temp / 11] = dist[temp] + 1;
            q.push(temp / 11);
        }
        if (temp % 5 == 0 and dist[temp / 5] > dist[temp] + 1)
        {
            dist[temp / 5] = dist[temp] + 1;
            q.push(temp / 5);
        }
        if (temp - 1 >= 0 and dist[temp - 1] > dist[temp] + 1 and dist[temp-1]==INT_MAX) // meaning dist[temp-1] > dist[temp]+1 means we have not visited temp-1 yet
        {
            dist[temp - 1] = dist[temp] + 1;
            q.push(temp - 1);
        }
        if (temp + 1 < 10000 and dist[temp + 1] > dist[temp] + 1)
        {
            dist[temp + 1] = dist[temp] + 1;
            q.push(temp + 1);
        }
    }
    return dist[y];
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << minimumOperationToMakexandYequal(x, y);
    return 0;
}