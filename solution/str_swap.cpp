/**
 * 1790. Check if One String Swap Can Make Strings Equal
 * link - https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/
 */

 class Solution {
    public:
        bool areAlmostEqual(string s1, string s2) {
            int eq = 0, n = s1.length();
            map<char, int> m1, m2;
            for (int i = 0; i<n; i++) {
                if (s1[i] != s2[i]) eq++;
                if (m1.find(s1[i]) != m1.end()) m1[s1[i]]++;
                else m1[s1[i]] = 1;
                if (m2.find(s2[i]) != m2.end()) m2[s2[i]]++;
                else m2[s2[i]] = 1;
            }
            if ((eq == 0 || eq == 2) && (m1 == m2)) return 1;
            else return 0;
        }
    };