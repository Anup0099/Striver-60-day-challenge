#include <bits/stdc++.h>
using namespace std;
// A Domain Name System (DNS) translates domain names to IP addresses which are then used by browsers to load internet resources. For quicker DNS lookups, browsers often store a number of recent DNS queries in a DNS cache. Retrieving data from the cache is often faster than retrieving it from a DNS server. This task aims to simulate DNS resolution and determine the time taken to process different URLS.
// Assume that the DNS cache can store a maximum of the cache size most recent DNS requests, i.e., URL-IP mappings. The cache is initially empty. It takes cache time units of time to fetch data from the DNS cache, and server time units of time to fetch data from the DNS server.
// 4
// Given a list of n URLs visited as an array of strings, urls, determine the minimum time taken to resolve each DNS request.
// Note: New DNS requests are dynamically added to the cache, and the cache stores mappings according to the order in which the requests were made.
// Example
// Suppose cache_size = 3, cache_time = 2, server_time = 5, urls = ["http://www.hackerrank.com", "http://www.google.com", "http://www.yahoo.com", "http://www.gmail.com", "http://www.yahoo.com", "http://www.hackerrank.com", "http://www.gmail.com"]
// O
// R


vector<int> getcache(int cacheSize, int cacheTime, int serverTime, vector<string> urls)
{
    vector<int> ans;
    unordered_map<string, int> mp;
    int n = urls.size();
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(urls[i]) != mp.end())
        {
            if (time - mp[urls[i]] <= cacheTime)
            {
                ans.push_back(time);
                continue;
            }
            else
            {
                mp[urls[i]] = time;
                ans.push_back(time + serverTime);
            }
        }
        else
        {
            if (mp.size() == cacheSize)
            {
                int minTime = INT_MAX;
                string minUrl = "";
                for (auto it : mp)
                {
                    if (it.second < minTime)
                    {
                        minTime = it.second;
                        minUrl = it.first;
                    }
                }
                mp.erase(minUrl);
            }
            mp[urls[i]] = time;
            ans.push_back(time + serverTime);
        }
        time++;
    }
    return ans;
    
}

int main()
{
    int cacheSize, cacheTime, serverTime;
    cin >> cacheSize >> cacheTime >> serverTime;
    int n;
    cin >> n;
    vector<string> urls(n);
    for (int i = 0; i < n; i++)
    {
        cin >> urls[i];
    }
    vector<int> ans = getcache(cacheSize, cacheTime, serverTime, urls);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}