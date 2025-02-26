/**
 * 1910. Remove All Occurrences of a Substring
 * link - https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
 */

 class Solution {
    public:
        string removeOccurrences(string s, string part) {
            string st;
            int n = s.length(), m = part.length();
            for (int i = 0; i<n; i++) {
                st.push_back(s[i]);
                if (s[i] == part[m-1]) {
                    string temp = "";
                    for (int j = 0; j<m; j++) {
                        if (!st.empty()){
                            char ch = st.back();
                            st.pop_back();
                            temp = ch + temp;
                        } else break;
                    }
    
                    if (temp == part) continue;
                    else {
                        for (auto x:temp) st.push_back(x);
                    }
                }
            }
    
            // string ans = "";
            // while(!st.empty()) {
            //     char ch = st.top(); st.pop();
            //     ans = ch + ans;
            // }
    
            // return ans;
            return st;
        }
    };