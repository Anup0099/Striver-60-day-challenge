#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> hash;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(arr[i] + arr[j]);
            if (hash.find(third) != hash.end())
            {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hash.insert(arr[j]);
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
    return res;
}
int main()
{
    

}