/**
 * 3174. Clear Digits
 * link - https://leetcode.com/problems/clear-digits/description/
 */

 class Solution {
    public:
        string clearDigits(string s) {
            stack<char> q;
            int n = s.length();
            for (int i = 0; i<n; i++) {
                char ch = s[i];
                if (isdigit(ch)) q.pop();
                else q.push(ch);
            }
    
            string ans = "";
            while(!q.empty()) {
                char ch = q.top(); q.pop();
                ans = ch + ans;
            }
    
            return ans;
        }
    };