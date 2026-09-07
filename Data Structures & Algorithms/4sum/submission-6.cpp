class Solution {
   public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> set;
        sort(nums.begin(), nums.end());
        for (long long i = 0; i < nums.size(); i++) {
            for (long long j = i + 1; j < nums.size(); j++) {
                long long k = j + 1;
                 long long l = nums.size() - 1;
                while (k < l) {
                    long long sum = (long long) nums[i] + nums[j] + nums[k] + nums[l];
                   
                    if (sum == target) {
                        set.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else if (sum < target) {
                        k++;
                    }
                }
            }
        }
        vector<vector<int>> ans(set.begin(), set.end());
        return ans;
    }
};