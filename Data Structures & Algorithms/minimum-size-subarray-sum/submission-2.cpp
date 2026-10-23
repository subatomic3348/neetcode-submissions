class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int smallest = INT_MAX;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>=target){
                return 1;
            }
            int sum =nums[i];
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum>=target){
                    smallest = min(smallest,j-i+1);
                }
            }
        }
        if(smallest==INT_MAX){
            smallest = 0;
        }
        return smallest;
        
    }
};