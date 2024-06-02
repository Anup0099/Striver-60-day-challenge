#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<bool> &visit, stack<int> &st, vector<int> arr[])
{
    visit[node] = true;
    for (auto it : arr[node])
    {
        if (!visit[it])
        {
            dfs(it, visit, st, arr);
        }
    }
    st.push(node);
}
vector<int> toposort(int v, vector<int> arr[])
{
    vector<int> a;
    vector<bool> visit(v, false);
    stack<int> st;
    for (int i = 0; i < v; i++)
    {
        if (!visit[i])
        {
            dfs(i, visit, st, arr);
        }
    }
    while (!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }
    return a;
}
int main() 
{
    int v=6;
    int e=6;
    // give example of graph
    vector<int> arr[v];
    arr[5].push_back(2);
    arr[5].push_back(0);
    arr[4].push_back(0);
    arr[4].push_back(1);
    arr[2].push_back(3);
    arr[3].push_back(1);
    vector<int> ans=toposort(v,arr);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
    

}