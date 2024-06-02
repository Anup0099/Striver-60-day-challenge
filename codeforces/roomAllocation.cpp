#include <bits/stdc++.h>
using namespace std;
// adavpur University wants to find out the number of rooms they need to accommodate the teams coming for their fest.
// A total of
// �
// N colleges are coming, where, the
// �
// �
// ℎ
// i
// th
//   college has a team of
// �
// �
// A
// i
// ​
//   members.

// Each room can accommodate at most
// 2
// 2 people. Moreover, people from different colleges dislike staying together.

// Find the minimum number of rooms Jadavpur University will have to use to accommodate everyone, such that a room never contains people from different colleges.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains one integer,
// �
// N, the number of colleges coming for the fest.
// The next line contains
// �
// N space-separated integers,
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// A
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  , the number of people coming from each college.
// Output Format
// For each test case, output on a new line, the minimum number of rooms needed to accommodate all students, such that a room never contains people from different colleges.
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
        int totalRooms = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = ceil((double)arr[i] / 2);
            totalRooms += temp;
        }
        cout << totalRooms << endl;
    }
}