class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>set;
        for(int i =0;i<nums.size();i++){
            set.insert(nums[i]);
        }        
        if(set.size()==nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
};