// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> q(n), a(n), b(n);
//     for (int i = 0; i < n; i++)
//         cin >> q[i];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < n; i++)
//         cin >> b[i];
//     long long inf = 1e18;
//     int ans = 0;
//     int maxi = *max_element(q.begin(), q.end());
//     for (int i = 0; i <= maxi; i++)
//     {
//         int y = -1;
//         for (int j = 0; j < n; j++)
//         {
//             if (q[j] < a[j] * i)
//             {
//                 y = -1;
//             }
//             else if (b[i] > 0)
//             {
//                 y = min(y, (q[j] - a[j] * i) / b[j]);
//             }
//         }
//         ans = max(ans, i + y);
//     }
//     cout << ans << endl;
// }
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<long long> Q(N), A(N), B(N);
    for (int i = 0; i < N; i++) {
        std::cin >> Q[i];
    }
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }
    long long INF = 1e18;
    long long ans = 0;
    for (long long x = 0; x <= *max_element(Q.begin(), Q.end()); x++) {
        long long y = INF;
        for (int i = 0; i < N; i++) {
            if (Q[i] < A[i] * x) {
                y = -INF;
            } else if (B[i] > 0) {
                y = std::min(y, (Q[i] - A[i] * x) / B[i]);
            }
        }
        ans = std::max(ans, x + y);
    }
    std::cout << ans << std::endl;
    return 0;
}