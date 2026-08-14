class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map<int,int>mpp;
    for(int i =0;i<nums.size();i++){
        mpp[i] = nums[i];
    }
    for(int i =0;i<nums.size();i++){
       for(auto it : mpp){
        if(nums[i]==it.second&&abs(it.first - i)<=k&&i!=it.first){
            return true;
        }
       }
    }
      return false;
        
    }
};