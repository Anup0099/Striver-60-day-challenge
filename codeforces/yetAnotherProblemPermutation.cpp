#include <bits/stdc++.h>
using namespace std;
// Alex got a new game called "GCD permutations" as a birthday present. Each round of this game proceeds as follows:

// First, Alex chooses a permutation†
//  a1,a2,…,an
//  of integers from 1
//  to n
// .
// Then, for each i
//  from 1
//  to n
// , an integer di=gcd(ai,a(imodn)+1)
//  is calculated.
// The score of the round is the number of distinct numbers among d1,d2,…,dn
// .
// Alex has already played several rounds so he decided to find a permutation a1,a2,…,an
//  such that its score is as large as possible.

// Recall that gcd(x,y)
//  denotes the greatest common divisor (GCD) of numbers x
//  and y
// , and xmody
//  denotes the remainder of dividing x
//  by y
// .

// †
// A permutation of length n
//  is an array consisting of n
//  distinct integers from 1
//  to n
//  in arbitrary order. For example, [2,3,1,5,4]
//  is a permutation, but [1,2,2]
//  is not a permutation (2
//  appears twice in the array), and [1,3,4]
//  is also not a permutation (n=3
//  but there is 4
//  in the array).
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        set<int> st;

        for (int i = 2; i <= n; i++)
            st.insert(i);

        cout << 1 << " ";

        for (int i = 2; i <= n; i++)
        {
            if (st.find(i) == st.end())
                continue;
            for (int j = i; j <= n; j *= 2)
            {
                if (st.find(j) == st.end())
                    continue;
                cout << j << " ";
                st.erase(j);
            }
        }

        cout << endl;
    }
}