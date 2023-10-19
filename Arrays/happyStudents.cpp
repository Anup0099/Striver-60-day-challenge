#include <bits/stdc++.h>
using namespace std;
// you are given 0 indexed array   nums of length n where n is total number of students in the class.the class teacher tries to select a group of students so that all the students remain happy happy conditions are the students is selected and the total number of selected is strictly greater than nums[i] and the student is not selected if selected is strictly less than nums[i].return the number of ways to select a group of students so that  every student is happy example [1,1] output=2 select no student or select both students
int countWays(vector<int> &nums)
{
    int n= nums.size();
    int count=0;
    // first case if we choose smallest element but if all elements are same we have take all elements ans ways to select 1and 0 not to choose;
}
int main() {}