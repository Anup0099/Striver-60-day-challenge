#include <bits/stdc++.h>
using namespace std;

class RandomizedSet
{
public:
    set<int> s;
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if(s.find(val)!=s.end()){
            return false;
        }
        s.insert(val);
        return true;
    }

    bool remove(int val)
    {
        if (s.find(val) != s.end())
        {
            s.erase(val);
            return true;
        }
        return false;
    }

    int getRandom()
    {
        int n = s.size();
        if(n==0){
            return -1;
        }
        int r = rand() % n;
        auto it = s.begin();
        advance(it, r);
        return *it;
    }
};
