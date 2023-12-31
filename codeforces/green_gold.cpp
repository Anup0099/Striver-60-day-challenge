#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < arr.size(); i++)
        {
            v.push_back({arr[i], i});
        }
        sort(begin(v), end(v));
        vector<int> ans(n);
        for (int i = 0; i < v.size(); i++)
        {
            // smallest value in v should maximum permutation
            //  1 2 3 4 5
            ans[v[i].second] = n - i;
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        // sabse chote element ko maximum permutation dena hai
        // he want to find a permutation b of length n
        // such that the number of distinct numbers in the element-wise
        // difference array a and permutation b is maximized
        // element wise diff ci =ai-bi
        // 3
        // 10 3 3
        // output karna hai permuation
        // tahole array b kotha thke anbo
        // index theke minus korche naki
        // 10 1 = 9
        // 3 2 =1
        // 3 3= 0
        // to three different element hoche to tahole 3 length permutation
        // set me dalna hai length jitna hoga utne length ka array print karo
        // 2
        // 1 1
        // 1 1=0
        // 1 2=-1
        // two length set

        // so
        // permuation 1 2
        // 3
        // 1 2 1
        // 1 2 3
        // 1 2 2
        // 1 2 3
        // 0 0 -1
        // ans 1 2

        // 0 0 -2
        // set me daalenge to size 2
        // ans 1 2
    }
}