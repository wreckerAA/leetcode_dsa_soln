/**
 * 2364. Count Number of Bad Pairs
 * link - https://leetcode.com/problems/count-number-of-bad-pairs/description/
 */

 class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            unordered_map<int, int> m;
            long long p = 0, n = nums.size();
            for (int i = 0; i<n; i++) {
                int a = nums[i] - i;
                p += m[a]++;
            }
            return (n * (n - 1)) / 2 - p;
        }
    };