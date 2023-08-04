#include <bits/stdc++.h>
using namespace std;
class queue
{
    vector<int> arr;
    int start, end, currSize, maxSize;

public:
    queue()
    {
        start = -1;
        end = -1;
        currSize = 0;
    }
    queue(int maxSize)
    {
        vector<int> arr(maxSize);
        start = -1;
        end = -1;
        currSize = 0;
    }
    void push(int newElement)
    {
        if (currSize == maxSize)
            cout << "overflow" << endl;
        if (end == -1)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % maxSize;
        }
        arr[end] = newElement;
        cout << "the element is" << newElement << endl;
        currSize++;
    }
    int pop()
    {
        if (start == -1)
            cout << "queue empty" << endl;
        int popped = arr[start];

        if (currSize == 1)
        {
            start = -1;
            end = -1;
        }
        else
        {
            start = (start + 1) % maxSize;
        }
        currSize--;
        return popped;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}