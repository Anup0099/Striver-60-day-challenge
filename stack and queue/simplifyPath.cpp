#include <bits/stdc++.h>
using namespace std;
string simplifyPath(string path)
{
    string token;
    stringstream ss(path); // what is the use of stringstream?
    stack<char> st;
    while (getline(ss, token, '/'))
    {
        if (token == "" || token == ".")
        {
            continue;
        }
    }
}
int main() {}