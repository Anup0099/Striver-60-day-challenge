#include <bits/stdc++.h>
using namespace std;
void duplicateZero(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            arr.insert(arr.begin() + i, 0);//one zero is added means we have to delete one element from the end  that is why we are arr.pop_back();
            arr.pop_back();
            i += 2;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZero(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}