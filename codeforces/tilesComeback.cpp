#include <bits/stdc++.h>
using namespace std;
// Vlad remembered that he had a series of n
//  tiles and a number k
// . The tiles were numbered from left to right, and the i
// -th tile had colour ci
// .

// If you stand on the first tile and start jumping any number of tiles right, you can get a path of length p
// . The length of the path is the number of tiles you stood on.

// Vlad wants to see if it is possible to get a path of length p
//  such that:

// it ends at tile with index n
// ;
// p
//  is divisible by k
// the path is divided into blocks of length exactly k
//  each;
// tiles in each block have the same colour, the colors in adjacent blocks are not necessarily different.
// For example, let n=14
// , k=3
// .

// The colours of the tiles are contained in the array c
//  = [1,2,1,1,2,2,3,3,1,3,4,4,2,4
// ]. Then we can construct a path of length 6
//  consisting of 2
//  blocks:

// c1→c3→c4→c11→c12→c14
// All tiles from the 1
// -st block will have colour 1
// , from the 2
// -nd block will have colour 4
// .

// It is also possible to construct a path of length 9
//  in this example, in which all tiles from the 1
// -st block will have colour 1
// , from the 2
// -nd block will have colour 3
// , and from the 3
// -rd block will have colour 4
// .

// Input
// The first line of input data contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The description of the test cases follows.

// The first line of each test case ontains two integers n
//  and k
//  (1≤k≤n≤2⋅105
// )—the number of tiles in the series and the length of the block.

// The second line of each test case contains n
//  integers c1,c2,c3,…,cn
//  (1≤ci≤n
// ) — the colours of the tiles.

// It is guaranteed that the sum of n
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output on a separate line:

// YES if you can get a path that satisfies these conditions;
// NO otherwise.
// You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recog
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
    }
}