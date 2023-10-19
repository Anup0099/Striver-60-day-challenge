#include <bits/stdc++.h>
using namespace std;
// alice bob playing a game . each player rolls a regular dice six faced dice 3 times. maximum number can be formed using the rolls. the player with the higher number wins. if both players have the same number, then the game is a draw.
string win(vector<int> arr)
{
    int n = arr.size();
    int alice = 0, bob = 0;
    string maxi = "";
    string maxi2 = "";
    for (int i = 0; i < n / 2; i++)
    {
        maxi += to_string(arr[i]);
    }
    sort(maxi.begin(), maxi.end(), greater<int>());
    for (int i = n / 2; i < n; i++)
    {
        maxi2 += to_string(arr[i]);
    }
    sort(maxi2.begin(), maxi2.end(), greater<int>());
    // cout << maxi << " " << maxi2 << endl;
    if (maxi > maxi2)
    {
        return "Alice";
    }
    else if (maxi2 > maxi)
    {
        return "Bob";
    }
    else
    {
        return "Tie";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        for (int i = 0; i < 6; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        cout << win(arr) << endl;
    }
}