#include <bits/stdc++.h>
using namespace std;
// fear of the dark problem
// monocarp tries to go go home he is currently at 0,0 of 2d plane his house is at the point px,py unfortunately it is dark there are two lantern located at ax ay and bx by you can choose any non-negetive integer w and set the power of both the lantern to w. if a lantern power is set to w it illuminates a circle of radius w centered at the lantern location.choose minimum value w for the power of the lantern in such a way that there is a path from the point 0,0 to px,py that is completely illuminated
double getDist(int x1, int y1, int x2, int y2)
{
    int x = x1 - x2;
    int y = y1 - y2;
    return sqrt(x * x + y * y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double distAO = getDist(ax, ay, 0, 0);
        double distBO = getDist(bx, by, 0, 0);
        double distAP = getDist(ax, ay, px, py);
        double distBP = getDist(bx, by, px, py);
        double distAB = getDist(ax, ay, bx, by);
        double ans = min({max(distAO, distAP),
                          max(distBO, distBP),
                          max({distAO, distAB / 2, distBP}),
                          max({distBO, distAB / 2, distAP})});
        cout << fixed << setprecision(10) << ans << endl;
    }
}