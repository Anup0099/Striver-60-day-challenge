#include <bits/stdc++.h>
using namespace std;
struct queue
{
    stack<int> input, output;
    void push(int data)
    {
        input.push(data);
    }
    int pop()
    {
        if (output.empty())
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int x = output.top();
        output.pop();
        return x;
    }
    int top()
    {
        if (output.empty())
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    int size()
    {
        return (output.size() + input.size());
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}