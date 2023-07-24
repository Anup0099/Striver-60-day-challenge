#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    // find the breaking point
    int i = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }
    // if break point does not exist
    if(ind==-1){
        // reverse the array
        reverse(arr.begin(),arr.end());
        return arr;
    }
    // find the next greater element 
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}