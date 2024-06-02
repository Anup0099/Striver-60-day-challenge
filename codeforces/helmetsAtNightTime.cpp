#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr1(n);
        vector<long long> arr2(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        vector<pair<long long, long long>> arr(n);
        for (long long i = 0; i < n; i++)
        {
            arr[i] = {arr1[i], arr2[i]};
        }
        long long ans = 0;
        sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
             { return a.second < b.second; });
        // for (auto x : arr)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }
        long long i = 0;
        ans += k;
        n--;
        while (n > 0)
        {
            long long freq = arr[i].first;
            while (freq > 0 && i < n)
            {
                ans += arr[i].second;
                freq--;
                n--;
            }
            i++;
        }
        cout << ans << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int t;
	cin >> t;
	
	while (t--) {
		
		int n, p;
		cin >> n >> p;
		
		vector<vector<int>> a (n, vector<int> (2));
		for (int i = 0; i < n; i++) 
			cin >> a[i][1];
		
		for (int i = 0; i < n; i++) 
			cin >> a[i][0];
		
		map <int, long long> mp;
		mp[p] = n;
		
		sort (a.begin(), a.end());
		long long ans = 0;
		
		for (int i = 0; i < n; i++) {
			int mn = mp.begin()->first;
			ans += mn;
			mp[a[i][0]] += a[i][1];
			mp[mn]--;
			if (mp[mn] == 0) mp.erase (mn);
		}
		
		cout << ans << '\n';
	}
	
	return 0;
}