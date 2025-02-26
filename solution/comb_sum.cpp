/**
 * 39. Combination Sum
 * link - https://leetcode.com/problems/combination-sum/description/
 */

 class Solution {
    private:
        vector<vector<int>> ans;
        void fnc(vector<int>& arr, int ind, int target, multiset<int> temp) {
            if (ind == arr.size()) {
                if (target == 0) {
                    vector<int> t(temp.begin(), temp.end());
                    ans.push_back(t);
                    return;
                }
            }
            
            multiset<int> t1 = temp, t2 = temp;
            t1.insert(arr[ind]);
            fnc(arr, ind, target - arr[ind], t1);
            if (ind + 1 < arr.size()) {
                t2.insert(arr[ind+1]);
                fnd(arr, ind + 1, target - arr[ind + 1], t2);
            }
        }
    public:
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            
        }
    };