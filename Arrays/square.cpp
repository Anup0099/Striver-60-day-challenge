#include <bits/stdc++.h>
using namespace std;
// A square of positive (strictly greater than 0
// ) area is located on the coordinate plane, with sides parallel to the coordinate axes. You are given the coordinates of its corners, in random order. Your task is to find the area of the square.

// Input
// Each test consists of several testcases. The first line contains one integer t
//  (1≤t≤100
// ) — the number of testcases. The following is a description of the testcases.

// Each testcase contains four lines, each line contains two integers xi,yi
//  (−1000≤xi,yi≤1000
// ), coordinates of the corners of the square.

// It is guaranteed that there is a square with sides parallel to the coordinate axes, with positive (strictly greater than 0
// ) area, with corners in given points.

// Output
// For each test case, print a single integer, the area of the square.
bool checkPerfectSquare(int n, int sq)
{
    if (n * n == sq)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3, x4, y1, y2, y3, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        vector<pair<int, int>> v;
        v.push_back({x1, y1});
        v.push_back({x2, y2});
        v.push_back({x3, y3});
        v.push_back({x4, y4});
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i != j)
                {
                    int x = v[i].first - v[j].first;
                    int y = v[i].second - v[j].second;
                    int sq = x * x + y * y;
                    int dist = sqrt(x * x + y * y);
                    // cout << dist << endl;
                    if (checkPerfectSquare(dist, sq))
                    {
                        ans = dist;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}