#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> v(8, vector<char>(8));
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> v[i][j];
            }
        }
        string s = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (v[i][j] != '.')
                {
                         s+=(v[i][j]);       
                                
                }
            }
        }
        cout<< s<<endl;
    }
}