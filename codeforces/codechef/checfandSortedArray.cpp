#include <bits/stdc++.h>
using namespace std;
// Chef loves sorting! Chef recently learnt about a new form of sorting, endsort!

// While performing endsort of an array
// �
// A of
// �
// N distinct elements, Chef can move any element to the end of the array.

// However, Chef fears that this will take too much time. Help Chef find the number of moves to sort the given array in ascending order using endsort!

// ###Input:

// The first line contains a single integer
// �
// T, the number of test cases.
// The first line of each test case contains a single integer
// �
// N, the number of elements of given array
// �
// A.
// The next line would contain
// �
// N space separated integers, the elements of the array.
// ###Output:

// Print a single integer, the minimum number of moves to sort the array in ascending order using endsort.
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans[i] = v[i];
        }
        sort(ans.begin(), ans.end());
        int dist = 0;
        vector<pair<int, int>> v1;
        for (int i = 0; i < n; i++)
        {
            v1.push_back(make_pair(v[i], i));
        }
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
        {
            dist += abs(i - v1[i].second);
            cout<<dist<<endl;
        }
        for(auto i:v1)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        if ((dist - 1) > n)
        {
            cout << dist % n << endl;
        }
        else
        {
            cout << dist - 1 << endl;
        }

    }
}