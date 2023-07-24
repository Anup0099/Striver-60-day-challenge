#include <bits/stdc++.h>
using namespace std;
vector<string> splitWordsBySeparator(vector<string> &words, char separator)
{
    // int n= words.size();
    // vector<string>v;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<words[i].length();j++){
    //         if(words[i][j]==separator){
    //             v.push_back(words[j]);
    //         }
    //     }
    // }
    // return v;
    vector<string> result;
    for (const string &word : words)
    {
        stringstream ss(word);
        string item;
        while (getline(ss, item, separator))
        {
            if (!item.empty())
            {
                result.push_back(item);
            }
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}