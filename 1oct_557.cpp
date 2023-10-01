#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        // s[s.size()] = ' ';
        // string ans;
        int k = 0;
        for(int i=0;i<s.size();i++){
            // stack<int> st;
            if(s[i] == ' '){
                reverse(s.begin()+k,s.begin()+i);
                k = i+1;
            }
        }
        reverse(s.begin()+k,s.end());
        return s;
    }

};