#include <bits/stdc++.h> 
using namespace std;
// Mr.Butler is managing his class of n students. He placed all his students in a line and gave the kth student from the left a card with the letter ak written on it. He would now like to rearrange the students so that the kth student from the left has a card with the letter by written on it. I

// To do this, he will choose some consecutive groups of students, and reverse their order. Students will hold on to their original cards during this process.
// He's now wondering, what is the number of valid ways to do this? (It may be impossible, in which case, the answer is zero).

// With sequences abba and aabb, Mr.Butler can

// choose group a (bba). With sequences caxcab

// and cacxab, Mr.Butler can choose ca(xc)ab or

// c(axca)b. With sequences a and z, there are no

// solutions.
// The input is two lines of lowercase letters, A and B. The kth character of A and B represent ak and b respectively.

// It is guaranteed that A and B have the same positive length, and A and B are not identical.

// Output format:

// The output displays the number of ways Mr.Butler can reverse some consecutive groups of A to form the line specified by string B.
// input:
// abba
// aabb
// output:
// 1
// input:
// a
// z
// output:
// 0
int arrange(string a, string b)
{
    
    
    

}
int main() {
    string a, b;
    cin >> a >> b;

    
    cout << arrange(a, b);
    return 0;
} 