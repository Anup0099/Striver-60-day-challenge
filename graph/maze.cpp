#include <bits/stdc++.h>
using namespace std;
// void calc(int n, string s)
// {
//     vector<int> dp1(n), dp2(n);
//     for (int i = 0; i < n; i++)
//     {
//         dp1[i] = 1;
//         while (0 <= i - dp1[i] && i + dp1[i] < n)
//         {
//             if (s[i - dp1[i]] != s[i + dp1[i]])
//             {
//                 break;
//             }
//         }
//         dp1[i]++;
//         dp2[i] = 0;
//         while (0 <= i - dp2[i] && i + dp2[i] + 1 < n)
//         {
//             if (s[i - dp2[i]] != s[i + dp2[i] + 1])
//             {
//                 break;
//             }
//             dp2[i]++;
//         }
//     }
// }
// time complexity of this solution is O(n^2)
int getMinTime(vector<int> task_memory, vector<int> task_type, int maxMemory)
{
    unordered_map<int, int> mp;
    int n = task_memory.size();
    for (int i = 0; i < n; i++)
    {
        mp[task_type[i]] += task_memory[i];
        // here task_type[i] is the key and task_memory[i] is the value
        //  if the key is already present then the value is updated
    }
    int ans = 0;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << " ";
        ans += ceil((double)it.second / maxMemory);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int maxMemory = 4;
    vector<int> task_memory = {1, 2, 3, 4, 2};
    vector<int> task_type = {1, 2, 1, 2, 3};
    cout << getMinTime(task_memory, task_type, maxMemory);
}