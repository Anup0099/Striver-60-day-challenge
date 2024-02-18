#include <bits/stdc++.h>
using namespace std;
// Chef is planning to gift something to Chefina on each of the
// 7
// 7 days of valentine week. He has a total budget of
// �
// X rupees.

// Find whether he can plan a series of gifts such that:

// Each gift has a positive value;
// The value of a gift is at least twice the value of previous gift.
// Note that we do not consider any previous gift for the first gift, and thus the first gift can be of any positive value.
// Output Format
// For each test case, output on a new line, YES, if Chef can plan a series of gifts such that each gift is at least twice the value of previous gift. Otherwise, print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int count = 0;
        int sum = 1;
        while (x > 0)
        {
            sum = sum * 2;
            // cout << sum << endl;
            count++;
            x = x - sum;

            if (count == 7)
            {
                break;
            }
        }
        if (count == 7)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}