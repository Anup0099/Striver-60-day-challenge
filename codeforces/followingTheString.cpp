#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countZero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                countZero++;
            }
        }
        string s = "";
        for (int i = 0; i < countZero; i++)
        {
            // chanege the value of ascii value of 0 to get alapahabet
            s += (char)(97 + i);

        }
        cout << s << endl;
        int countOnes=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                countOnes++;
            }
        }
        string s1 = "";
        for (int i = 0; i < countOnes; i++)
        {
            

        }
    }
}