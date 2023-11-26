#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed array of strings garbage where garbage[i] represents the assortment of garbage at the ith house. garbage[i] consists only of the characters 'M', 'P' and 'G' representing one unit of metal, paper and glass garbage respectively. Picking up one unit of any type of garbage takes 1 minute.

// You are also given a 0-indexed integer array travel where travel[i] is the number of minutes needed to go from house i to house i + 1.

// There are three garbage trucks in the city, each responsible for picking up one type of garbage. Each garbage truck starts at house 0 and must visit each house in order; however, they do not need to visit every house.

// Only one garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks cannot do anything.

// Return the minimum number of minutes needed to pick up all the garbage.
int garbagei(vector<string> &garbage, vector<int> &travel)
{
    int n = garbage.size();

    int glass = 0, metal = 0, paper = 0;
    bool g = false, m = false, p = false;
    for (int i = 0; i < n; i++)
    {
        string temp = garbage[i];
        // count(temp.begin(), temp.end(), 'G');
        if (temp.find("G") and i == 0)
        {
            g = true;
            glass += count(temp.begin(), temp.end(), 'G');
        }
        else if (temp.find("G") and i != 0)
        {
            g = true;
            glass += travel[i - 1] + count(temp.begin(), temp.end(), 'G');
        }
        else if (temp.find("G") == string::npos and i != 0)
        {
            glass += travel[i - 1];
        }
        else
        {
            glass += count(temp.begin(), temp.end(), 'G');
        }
    }
    cout << glass << endl;
    if (g == false)
        glass = 0;
    for (int i = 0; i < n; i++)
    {
        string temp = garbage[i];
        if (temp.find("M") and i == 0)
        {
            m = true;
            metal += count(temp.begin(), temp.end(), 'M');
        }
        else if (temp.find("M") and i != 0)
        {
            m = true;
            metal += travel[i - 1] + count(temp.begin(), temp.end(), 'M');
        }
        else if (temp.find("M") == string::npos and i != 0)
        {
            metal += travel[i - 1];
        }
        else
        {
            metal += count(temp.begin(), temp.end(), 'M');
        }
    }
    cout << metal << endl;
    if (m == false)
        metal = 0;
    for (int i = 0; i < n; i++)
    {
        string temp = garbage[i];
        if (temp.find("P") and i == 0)
        {
            p = true;
            paper += count(temp.begin(), temp.end(), 'P');
        }
        else if (temp.find("P") and i != 0)
        {
            p = true;
            paper += travel[i - 1] + count(temp.begin(), temp.end(), 'P');
        }
        else if (temp.find("P") == string::npos and i != 0)
        {
            paper += travel[i - 1];
        }
        else
        {
            paper += count(temp.begin(), temp.end(), 'P');
        }
    }
    cout << paper << endl;
    if (p == false)
        paper = 0;
    return glass + metal + paper;
}
int main()
{

    // garbage = ["G","P","GP","GG"], travel = [2,4,3]
    vector<string> garbage = {"MMM", "PGM", "GP"};
    vector<int> travel = {3, 10};
    cout << garbagei(garbage, travel);
}