class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int smallest = INT_MAX;
        int sum=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum>=target){
                smallest = min(smallest,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if(smallest==INT_MAX){
            smallest = 0;
        }
        return smallest;
        
    }
};