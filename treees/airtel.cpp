#include <bits/stdc++.h> 
using namespace std;
// At a perfume factory, every perfume bottle goes through three processes after each other. i.e. Distillation > Enfleurage > Extraction. The factory has P Distillation, Q Enfleurage, and R Extraction machines. Each machine can process only a single product at any time, and it takes T1 hours for Distillation, T2 hours for Enfleurage, and T3 hours for Extraction. Your task is to print the minimum hours required to produce N perfume bottles.
// Input Format:
// The input consists of two lines:
// • The first line contains an integer N, representing the number of perfume bottles.
// • The second line contains six space-separated integers P, Q, R, T1, T2, T3.
// The input will be read from the STDIN by the candidate
// Output Format:
// Print the minimum hours required to prepare N perfume bottles.
// The output will be matched to the candidate's output printed on the STDOUT
// Constraints:
// • 1 ≤N ≤10000
// • 1 ≤P, Q, R, T1, T2, T3 ≤1000
// Example:
// Input:
// 8
// 4 3 2 10 5 2
// Output:
// 32
// Explanation:
// There are 4 Distillation, 3 Enfleurage and 2 Extraction machines. Taking the waiting time into account, the start time for making each of the eight bottles is 0, 0, 2, 5, 10, 10, 12, and 15
// hours respectively. The last perfume bottles will be ready after 15 + 10 + 5 + 2 = 32 hours.
// Sample input 
// 8
// 4 3 2 10 5 2
// Sample output
// 32
// Explanation
// There are 4 Distillation, 3 Enfleurage and 2 Extraction machines. Taking the waiting time into account, the start time for making each of the eight bottles is 0, 0, 2, 5, 10, 10, 12, and 15 hours respectively. The last perfume bottles will be ready after 15 + 10 + 5 + 2 = 32 hours.
int solve(int n, int p, int q, int r, int t1, int t2, int t3) {
    int ans=0;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        if(p>0){
            a[i]+=t1;
            p--;
        }
        else if(q>0){
            a[i]+=t2;
            q--;
        }
        else if(r>0){
            a[i]+=t3;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        ans=max(ans,a[i]);
    }
    return ans;
   
}
int main() {
    int n, p, q, r, t1, t2, t3;
    cin >> n >> p >> q >> r >> t1 >> t2 >> t3;
    cout << solve(n, p, q, r, t1, t2, t3);
} 