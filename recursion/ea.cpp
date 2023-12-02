#include <bits/stdc++.h> 
using namespace std;
// left

// 3. JSON Diff Tool

// Language Python 3

// Autocomplete Ready

// 1>#!/bin/python3.

// 10

// ALL

// 1

// 2

// 3

// 4

// 5

// Implement a simple prototype service to find the difference between two JSON (JavaScript Object Notation) objects.

// 11 #

// 12 # Complete the 'getJS

// To keep the prototype simple, a JSON will contain only key-value pairs and no nested objects or arrays in it. Given two JSON strings, json1 and json2, find the list of keys for which the values are different. If a key is present in only one of the JSONs, it should not be considered in the result. The list of keys should be sorted in lexicographically ascending order.

// 13 #

// 14 # The function is exp

// 15 #The function accept

// 16 # 1. STRING jsonl

// 17 #2. STRING json2

// Example:

// Suppose json1 = "["hello":"world","hi":"hello", "you":"me")" and json2 = " {"hello":"world","hi":"helloo","you":"me"}"

// 18 #

// 19

// 20 def getJSONDiff(jsonl

// 21 # Write your code

// 22

// The only common key where the values differ is "hi". Hence the answer is ["hi"].

// Function Description

// Complete the function getJSONDiff in the editor below.

// getJSONDiff has the following parameter(s):

// json 1: the first JSON string

// json2: the second JSON string

// Returns

// 23 > if name == '__mai

// string[]: a sorted list of keys that have different associated values in the two JSONS

// Constraints

// 1s\json1, \json2 s 105

// • There are no white spaces in the string.

// Test Results 
int main() {
    string s1 = "[\"hello\":\"world\",\"hi\":\"hello\", \"you\":\"me\"]";
    string s2 = "{\"hello\":\"world\",\"hi\":\"helloo\",\"you\":\"me\"}";
    int n = s1.length();
    int m = s2.length();
    int i = 0, j = 0;
    vector<string> v1, v2;
    while(i < n and j < m) {
        if(s1[i] == s2[j]) {
            i++;
            j++;
        }
        else {
            string temp = "";
            while(s1[i] != ':') {
                temp += s1[i];
                i++;
            }
            v1.push_back(temp);
            temp = "";
            while(s2[j] != ':') {
                temp += s2[j];
                j++;
            }
            v2.push_back(temp);
            i++;
            j++;
        }
    }
    for(auto x: v1) {
        cout << x << " ";
    }
    cout << endl;
    for(auto x: v2) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
} 