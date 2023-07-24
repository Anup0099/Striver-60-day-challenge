#include <bits/stdc++.h>
using namespace std;
// Life is a like a box of of mozzarella sticks. You never know what you're gonna get, but you can predict with 100 percent accuracy that it will be a mozzarella stick.

// Chef's colleague issued a challenge to Chef: "If you eat more than
// �
// X mozzarella sticks, I'll give you
// 30
// 30 rupees for each extra one you eat".
// For example, if
// �
// =
// 5
// X=5 and Chef eats
// 8
// 8 sticks, he would receive
// 90
// 90 rupees because he ate
// 3
// 3 extra sticks.

// You know that the restaurant serves
// �
// Y mozzarella sticks per plate.
// You also know that Chef received
// �
// R rupees from his colleague as a result of the challenge.

// What's the maximum number of plates of mozzarella sticks that Chef could have ordered?

// Note:

// Chef won't order a new plate till he finishes eating all the sticks from the previous one.
// However, it's possible that Chef didn't finish all the sticks from the final plate he ordered.
// See the explained examples below for more clarification.
// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of one line of input, containing three space-separated integers
// �
// ,
// �
// ,
// X,Y, and
// �
// R — the lower limit on the number of sticks, the number of sticks on a single plate, and the money received by Chef.
// Output Format
// For each test case, output on a new line the answer: the maximum number of plates Chef could have ordered.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
            
            int x, y, r;
            cin >> x >> y >> r;
            int extra=r/30;
            int ans= (extra+x)/y;
            if((extra+x)%y!=0){
                ans++;
            }
            cout<<ans<<endl;

    }
}