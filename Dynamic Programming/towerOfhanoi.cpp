#include <bits/stdc++.h>
using namespace std;
int towerOFhanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int count = 0;
    count = towerOFhanoi(n - 1, from_rod, aux_rod, to_rod);
    count++;
    count += towerOFhanoi(n - 1, aux_rod, to_rod, from_rod);
    return count;
}
long long toh(int N, int from, int to, int aux)
{
    if (N == 0)
        return 0;
    if (N == 1)
    {
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        return 1;
    }
    long long count = 0;

    count = toh(N - 1, from, aux, to);

    count++;
    cout << "move disk" << N << " from rod " << from << " to rod " << to << endl;
    count += toh(N - 1, aux, to, from);
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << toh(n, 1, 3, 2) << endl;
    return 0;
}