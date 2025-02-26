/**
 * 1726. Tuple with Same Product
 * link - https://leetcode.com/problems/tuple-with-same-product/description/
 */

 class Solution {
    private:
        int fact(int a) {
            if (a == 0 || a == 1) return 1;
            return (a * fact(a-1));
        }
    public:
        int tupleSameProduct(vector<int>& nums) {
            map<int, int> mt;
            int n = nums.size();
            for (int i = 0; i<n; i++) {
                for (int j = i + 1; j<n; j++) {
                    if (i == j) continue;
                    int x = nums[i] * nums[j];
                    mt[x]++;
                }
            }
    
            int ans = 0;
    
            for (auto x:mt) {
                int p = x.second * (x.second-1) / 2;
                ans += p * 8;
            }
    
            return ans;
        }
    };