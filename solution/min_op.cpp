/**
 * 3066. Minimum Operations to Exceed Threshold Value II
 * link - 
 */

 class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
            // int n = nums.size();
            // for (int i = 0; i<n; i++) {
            //     pq.push(nums[i]);
            // }
    
            int ans = 0;
            while (pq.size() >= 2 && pq.top() < k) {
                long long x = pq.top(); pq.pop();
                long long y = pq.top(); pq.pop();
                pq.push(x * 2 + y);
                ans++;
            }
    
            return ans;
        }
    };