#include <bits/stdc++.h>
using namespace std;
// Emuskald needs a fence around his farm, but he is too lazy to build it himself. So he purchased a fence-building robot.

// He wants the fence to be a regular polygon. The robot builds the fence along a single path, but it can only make fence corners at a single angle a.

// Will the robot be able to build the fence Emuskald wants? In other words, is there a regular polygon which angles are equal to a?
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (360 % (180 - a) == 0)//why 360? because the sum of all angles of a polygon is 360 degrees and the sum of all angles of a regular polygon is 180*(n-2) degrees
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}