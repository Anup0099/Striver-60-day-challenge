 string ans = "";
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            int times = s[i] - '0';
            string temp = ans;
            for (int i = 0; i < times - 1; i++)
            {
                ans += temp;
            }
        }
        else
        {
            ans += s[i];
        }
    }
    return ans.substr(k - 1, 1);