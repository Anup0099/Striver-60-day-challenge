#include <bits/stdc++.h>
using namespace std;
bool checkIfstringIsrotatedbytwoplaces(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    if (n != m)
        return false;
    string clock = "", anticlock = "";
    clock = s1.substr(2, n-1) + s1.substr(0, 2);
    anticlock = s1.substr(n-2, 2) + s1.substr(0, n-2);
    return (clock==s2 || anticlock==s2);
}

int main() {
    string s1 = "amazon";
    map<char, int> m;
    // ascii value of all characters of string s1
    //ascii of a = 97, z = 122
    char ch = 'a';
    // store ascii value of all characters of string s1
    int ascii = (int)ch;

    
    for(int i=0;i<s1.length();i++)
    {
        char ch = s1[i];
        int ascii = (int)ch;
        int distance = s1[i] - 'a';
        cout<<distance<<endl;
        
        m.insert({ch, ascii});

    }
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}