    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    count++;
                }
            }
            if (count == 2 and s.find("11") != string::npos)
            {
                cout << "NO" << endl;
            }
            else if (count & 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }