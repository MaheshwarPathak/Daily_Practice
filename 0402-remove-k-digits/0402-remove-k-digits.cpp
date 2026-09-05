#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack<char> st;

        for(char digit : nums) {
            while(!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }

        while(!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        if(st.empty()) return "0";

        string res;

        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

        while(!res.empty() && res.back() == '0')
            res.pop_back();

        reverse(res.begin(), res.end());

        if(res.empty()) return "0";

        return res;
    }
};