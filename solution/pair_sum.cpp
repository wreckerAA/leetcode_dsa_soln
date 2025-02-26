/**
 * 2342. Max Sum of a Pair With Equal Sum of Digits
 * link - https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/
 */

 class Solution {
    private:
        int digitSum(int a) {
            int sum = 0;
            while (a>0) {
                sum += a%10;
                a /= 10;
            }
    
            return sum;
        }
    public:
        int maximumSum(vector<int>& nums) {
            map<int, multiset<int>> m;
            for (int i = 0; i<nums.size(); i++) {
                int s = digitSum(nums[i]);
                m[s].insert(nums[i]);
            }
    
            int ans = 0;
            for (auto x:m) {
                if (x.second.size() >= 2) {
                    auto it = x.second.rbegin();
                    int a = *it; it++;
                    int b = *it;
                    ans = max(ans, a+b);
                }
            }
    
            if (ans == 0) return -1;
            else return ans;
    
        }
    };