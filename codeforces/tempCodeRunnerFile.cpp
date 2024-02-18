int n;
        cin >> n;
        string s;
        cin >> s;
        string f;
        cin >> f;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else if (f[i] == '1')
            {
                count2++;
            }
        }