#include <bits/stdc++.h> 
using namespace std;
// In a project, you have a list of required skills req_skills, and a list of people. The ith person people[i] contains a list of skills that the person has.

// Consider a sufficient team: a set of people such that for every required skill in req_skills, there is at least one person in the team who has that skill. We can represent these teams by the index of each person.

// For example, team = [0, 1, 3] represents the people with skills people[0], people[1], and people[3].
// Return any sufficient team of the smallest possible size, represented by the index of each person. You may return the answer in any order.

// It is guaranteed an answer exists.
vector<int>solve(vector<string>&req_skills,vector<vector<string>>&people,int ind,int n,vector<int>skill){
    // using brute force recursion
    // base case
    
    

    
}
vector<int>smallestSufficientTeam(vector<string>&req_skills,vector<vector<string>>&people){
    int n= req_skills.size();
    vector<int>skill(n);
   return solve(req_skills,people,0,n-1,skill);

    
} 
int main() {} 