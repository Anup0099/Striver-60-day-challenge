#include <bits/stdc++.h>
using namespace std;
int mex(vector<int> a)
{
    int n = a.size();
    set<int> s(a.begin(), a.end());
    int result = 0;
    while (s.count(result))
    {
        result++;
    }
    a.push_back(result);
    return result;
}
int main()
{
    vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << mex(a) << endl;
    // cout the array
}