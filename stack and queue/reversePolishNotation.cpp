#include <bits/stdc++.h>
using namespace std;
int evaluate(vector<string> &s)
{
    stack<int> st;
    int n = s.size();
    int ans = 0;
    for (auto i : s)
    {
        if (i == "+" || i == "-" || i == "*" || i == "/")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(i=="+")
                st.push(a+b);
            else if(i=="-")
                st.push(b-a);
            else if(i=="*")
                st.push(a*b);
            else if(i=="/")
                st.push(b/a);
        }else{
            st.push(stoi(i));
        }
    }
    return st.top();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> s = {"2", "1", "+", "3", "*"};
    cout << evaluate(s);
}