#include <bits/stdc++.h>
using namespace std;
int minShotsForDominantWin(int alicePoints, int bobPoints)
{
    int diff = alicePoints - bobPoints;
    int targetDiff = 10;
    if (diff >= targetDiff)
    {
        return 0;
    }
    int count = 0;
    while (diff < targetDiff)
    {
        alicePoints += 3;
        diff = alicePoints - bobPoints;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << minShotsForDominantWin(a, b) << endl;
    }
}