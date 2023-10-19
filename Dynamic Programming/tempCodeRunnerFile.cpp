#include <bits/stdc++.h>
using namespace std;
// you are given a string s of length n. The string consists of character 0s and 1s only. For each subsequnce for string s . you need
int find(string s)
{
    int total = 1, o = 0, z = 1;
    bool flag = 1;
    for (auto i : s)
    {
        if (i == '0')
        {
            flag = 0;
            int save = total;
            total = 2 * total - z;
            z += save - z;
        }
        else
        {
            int save = total;
            total = 2 * total - o;
            o += save - o;
        }
    }
    return total - flag;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<find(s)<<endl;
    }
    return 0;
}