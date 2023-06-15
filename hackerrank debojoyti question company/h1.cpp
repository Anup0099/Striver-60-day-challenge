#include <bits/stdc++.h>
using namespace std;
// CareerCafe is seeking to identify talented students within a network. The network is represented as a directed graph with N vertices. The first vertex represents CareerCafe mentor, while the other vertices represent students labeled as Student 2, ..., Student N. Each edge in the graph represents a connection between two students or between mentor and a student. At time 0, the network starts with no connections between students.

// For each time t = 1, 2, ..., T, a new connection is established between two vertices. The connection is represented by a directed edge from Student u to Student v or from mentor to Student v. Both students and mentor can have multiple connections, including a connection to themselves.

// A student is considered talented if they can be reached by starting at the mentor and traversing exactly L connections. CareerCafe wants to determine the earliest time at which each student (i.e., vertex) i = 2, ..., N becomes talented. If a student cannot be reached by traversing L connections, -1 should be printed.

// By analyzing this graph and identifying the earliest time at which a student becomes talented, CareerCafe can identify the most promising students within the network.

// Note: The mentor is not considered a student and is not included in the count of N vertices.

// Function Description




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,t,l;
    cin>>n>>t>>l;
    
}