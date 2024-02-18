#include <bits/stdc++.h>
using namespace std;
int numberOflaserBeams(vector<string> &bank)
{
    int n = bank.size();
    int res = 0, prev = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (char ch : bank[i])
        {
            if (ch == '1')
            {
                curr++;
            }
        }
        res += prev * curr;
        if (curr != 0)
        {
            prev = curr;
        }
    }
    return res;
}
int main()
{
    vector<string> bank = {"011001", "001000", "010100", "001000"};
    cout << numberOflaserBeams(bank);
}