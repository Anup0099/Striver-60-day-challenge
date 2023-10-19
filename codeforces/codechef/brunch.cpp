#include <bits/stdc++.h>
using namespace std;
// brunch for 20 people total x plates but started taking y plates maximum number chef can feed properly
int brunch(int x, int y)
{
    int fed = x / y;
    if (fed >= 20)
    {
        return 20;
    }
    else
    {
        return fed;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << brunch(x, y) << endl;
    }
}