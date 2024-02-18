#include <bits/stdc++.h>
using namespace std;
int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f)
{
    if (a == e && !(a == c && d > min(b, f) && d < max(b, f)))
        return 1; // rook and queen in same row
    if (b == f && !(b == d && c > min(a, e) && c < max(a, e)))
        return 1; // rook and queen in the same column
    if (c + d == e + f &&
        !(c + d == a + b && a > min(c, e) && a < max(c, e)))
        return 1; // bishop and queen in the same anti- diagonal
    if (c - d == e - f &&
        !(c - d == a - b && a > min(c, e) && a < max(c, e)))
        return 1; // bishop and queen in the same diagonal
    return 2;
}
int main()
{
    int a = 1, b = 1, c = 8, d = 8, e = 2, f = 3;
    cout << minMovesToCaptureTheQueen(a, b, c, d, e, f);
}