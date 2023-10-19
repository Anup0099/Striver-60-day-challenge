#include <bits/stdc++.h>
using namespace std;
int minDeletions(string s)
{
    int n = s.length();
    unordered_map<char, int> map;
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
    }
    priority_queue<int> pq;//its a max heap we are using here because we want to delete the maximum number of characters

    for (auto i : map)
    {
        pq.push(i.second);//pushing the frequency of the characters in the string
    }
    int count = 0;
    while (!pq.empty())
    {
        int x = pq.top();//storing the top element of the heap
        pq.pop();//popping the top element of the heap
        if (pq.empty())
        {
            return count;//if the heap is empty then return the count
        }
        if (x == pq.top())//if the top element of the heap is equal to the top element of the heap then we need to decrement the top element of the heap
        {
            if (x > 1)
            {
                pq.push(x - 1);
            }
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "aaabbbcc";
    cout << minDeletions(s);
}