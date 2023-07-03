#include <bits/stdc++.h>
using namespace std;

int wordLadder(string startWord,string targetWord,vector<string>&wordList){
    int n= startWord.length(),m= targetWord.length();
    queue<pair<string,int>>q;
    q.push({startWord,1});
    unordered_set<int>st(wordList.begin(),wordList.end());
    st.erase(startWord);
    while(!q.empty()){
        string word= q.front().first;
        int steps= q.front().second;
        q.pop();
        if(word==targetWord)return steps;

        for(int i=0;i<word.size();i++){
            char original= word[i];
            for(char ch='a';ch<='z';ch++){
                word[i]=ch;
                if(st.find(ch)!=st.end()){
                    q.push({word,steps+1});
                    st.erase(word);
                }
            }
            word[i]=original;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}