#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed m x n integer matrix mat and an integer k. You have to cyclically right shift odd indexed rows k times and cyclically left shift even indexed rows k times.

// Return true if the initial and final matrix are exactly the same and false otherwise.

bool areSimilar(vector<vector<int>> &mat, int k)
{
    int n = mat.size();
    int m = mat[0].size();
    while(k--)
    {
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                int temp = mat[i][0];
                for(int j = 0; j < m - 1; j++)
                {
                    mat[i][j] = mat[i][j + 1];
                }
                mat[i][m - 1] = temp;
            }
            else
            {
                int temp = mat[i][m - 1];
                for(int j = m - 1; j > 0; j--)
                {
                    mat[i][j] = mat[i][j - 1];
                }
                mat[i][0] = temp;
            }
        }

    }
    return mat == mat;
    
}
int main() {}