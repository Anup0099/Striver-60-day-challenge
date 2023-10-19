#include <bits/stdc++.h>
using namespace std;
// a group of students in a class is denoted by a array a.The number of students in the classis denoted by n. the group is divided into small groups or sub-arrays of length k.The challenge is to find the student who is standing in an even position in every sub-array.
// input: n=3,k=2
// a[]={10,12,14}
// output: 10 12
// explanation: the first sub-array is {10,12} and the second sub-array is {12,14}. the student who is standing in an even position in every sub-array is 10.


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Iterate through the array and find the students in even positions in sub-arrays
    for (int i = 0; i <= n - k; i++) {
        bool allEven = true;
        for (int j = i; j < i + k; j++) {
            if (a[j] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        if (allEven) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
