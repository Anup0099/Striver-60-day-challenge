// #include <bits/stdc++.h>
// using namespace std;
// // Polycarp has a problem — his laptop keyboard is broken.

// // Now, when he presses the 'b' key, it acts like an unusual backspace: it deletes the last (rightmost) lowercase letter in the typed string. If there are no lowercase letters in the typed string, then the press is completely ignored.

// // Similarly, when he presses the 'B' key, it deletes the last (rightmost) uppercase letter in the typed string. If there are no uppercase letters in the typed string, then the press is completely ignored.

// // In both cases, the letters 'b' and 'B' are not added to the typed string when these keys are pressed.

// // Consider an example where the sequence of key presses was "ARaBbbitBaby". In this case, the typed string will change as follows: "" →A
// //  "A" →R
// //  "AR" →a
// //  "ARa" →B
// //  "Aa" →b
// //  "A" →b
// //  "A" →i
// //  "Ai" →t
// //  "Ait" →B
// //  "it" →a
// //  "ita" →b
// //  "it" →y
// //  "ity".

// // Given a sequence of pressed keys, output the typed string after processing all key presses.

// // Input
// // The first line of the input data contains an integer t
// //  (1≤t≤1000
// // ), the number of test cases in the test.

// // The following contains t
// //  non-empty lines, which consist of lowercase and uppercase letters of the Latin alphabet.

// // It is guaranteed that each line contains at least one letter and the sum of the lengths of the lines does not exceed 106
// // .

// // Output
// // For each test case, output the result of processing the key presses on a separate line. If the typed string is empty, then output an empty line.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int n = s.length();
//         vector<char> cap, small;
//         vector<bool> mark(n + 2, true);
//         string ans = "";

//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == 'B')
//             {
//                 if (!cap.empty())
//                 {
//                     mark[cap.back()] = false;
//                     cap.pop_back();
//                 }
//                 mark[i] = false;
//             }
//             else if (s[i] == 'b')
//             {
//                 if (!small.empty())
//                 {
//                     mark[small.back()] = false;
//                     small.pop_back();
//                 }
//                 mark[i] = false;
//             }
//             else if (s[i]>='A' and s[i]<='z')
//             {
//                 cap.push_back(s[i]);
//             }
//             else
//             {
//                 small.push_back(s[i]);
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (mark[i]==true)
//             {
//                 ans += s[i];
//             }
//         }
//         cout << ans << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
   Faster;
   int t;               cin>>t;
   while(t--){
      string s;         cin>>s;
      int n=s.size();

      vector<int> cap,sml;
      vector<bool> ok(n+2,true);

      for(int i=0;i<n;i++){
         if(s[i]=='b'){
            if(!sml.empty()){
               ok[sml.back()]=false;
               sml.pop_back();
            }
            ok[i]=false;
         }
         else if(s[i]=='B'){
            if(!cap.empty()){
               ok[cap.back()]=false;
               cap.pop_back();
            }
            ok[i]=false;
         }
         else if(s[i]>='A' and s[i]<='Z'){
            cap.push_back(i);
         }
         else{
            sml.push_back(i);
         }

      }

      for(int i=0;i<n;i++){
         if(ok[i]){
            cout<<s[i];
         }
      }
      cout<<endl;

      
   }
   return 0;
}
