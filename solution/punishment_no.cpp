/**
 * 2698. Find the Punishment Number of an Integer
 * link - https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description/
 */

 class Solution {
    private:
        bool check(int x, int t) {
            if (x==t) return 1;
            if (x==0) return (t==0);
            
            int m = min(x, 1000);
            for (int i = 10; i<=m; i *= 10) if (check(x/i, t - x%i)) return 1;
    
            return 0;
        }
    public:
        int punishmentNumber(int n) {
            int sum = 0;
            for (int i = 1; i<=n; i++) {
                int x = i*i;
                if (x%9 == 0 || x%9 == 1) sum += check(x, i) ? x : 0;
            }
    
            return sum;
        }
    };