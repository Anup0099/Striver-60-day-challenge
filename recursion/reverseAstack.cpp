#include <bits/stdc++.h>
using namespace std;
void reverse(stack<int> &s)
{
    if (s.empty())
        return;
    int top = s.top();
    s.pop();
    reverse(s);
    // stack<int> temp;
    // while (!s.empty())
    // {
    //     temp.push(s.top());
    //     s.pop();
    // }
    // s.push(top);
    // while (!temp.empty())
    // {
    //     s.push(temp.top());
    //     temp.pop();
    // }
    s.push(top);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}