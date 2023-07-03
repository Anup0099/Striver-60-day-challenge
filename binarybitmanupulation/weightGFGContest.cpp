#include <bits/stdc++.h>
using namespace std;
int count (int w){
    int count=0;
    while(w){
        w=w%2;
        count++;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}