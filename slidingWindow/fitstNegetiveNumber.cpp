#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    vector<long long> ans;
    int i = 0, j = 0;
    int n = N;
    while (j < n)
    {
        if (A[j] < 0)
        {
            ans.push_back(A[j]);
        }
        if (j - i + 1 < K)
        {
            j++;
        }
        else if (j - i + 1 == K)
        {
            if (ans.size() == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(A[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
}
void insert(stack<int> &s, int temp)
{
    if (s.size() == 0 || s.top() < temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    // here we are using recursion to insert the element at the correct position in the stack so that the stack remains sorted
    s.pop();
    insert(s, temp);
    s.push(val);
}
void sortaStack(stack<int> s)
{
    // using a min heap
    priority_queue<int, vector<int, greater<int>>> pq;
    while (!s.empty())
    {
        pq.push(s.top());
        s.pop();
    }
    while (!pq.empty())
    {
          s.push(pq.top());
            pq.pop();
    }
    // time complexity: O(nlogn)//because we are using a min heap
    // space complexity: O(n)
    // using recursion
    
}
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
          a = 0, b = 1;
          cout << b;
          for (int j = 1; j < i; j++)
          {
              c = a + b;
              cout << c;
              a = b;
              b = c;
          }
          cout << "\n";
    }
    return 0;
}