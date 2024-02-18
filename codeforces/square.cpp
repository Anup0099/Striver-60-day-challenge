#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int minx = min(x1, min(x2, min(x3, x4)));
        int maxx = max(x1, max(x2, max(x3, x4)));
        int miny = min(y1, min(y2, min(y3, y4)));
        int maxy = max(y1, max(y2, max(y3, y4)));
        int x = maxx - minx;
        int y = maxy - miny;
        cout << x * y << endl;
    }
}