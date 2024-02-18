#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int countPairs(int n, int arr[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int first = arr[i];
        for (int j = 0; j < n; j++)
        {
            int second = arr[j];
            int x = lcm(first, second) * gcd(first, second);

            for (int k = 0; k < n; k++)
            {
                if (arr[k] == x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}
int minimumASCIIDistance(std::string S, std::string A)
{
    int totalDistance = 0;
    for (int i = 0; i < A.length(); i++)
    {
        char currentChar = A[i];
        int minDistance = INT_MAX;
        for (int j = 0; j < S.length(); j++)
        {
            int distance = abs(currentChar - S[j]);
            if (distance < minDistance)
            {
                minDistance = distance;
                cout << "minDistance: " << minDistance << endl;
                A[i] = S[j];
            }
        }
        totalDistance += minDistance;
    }
    return totalDistance;
}

int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << countPairs(n, arr) << endl;
}