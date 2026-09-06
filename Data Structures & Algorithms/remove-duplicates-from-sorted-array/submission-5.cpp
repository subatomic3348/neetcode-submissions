class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        for(int j =1;j<nums.size();j++){
            while(j<nums.size()&&nums[j]!=nums[i]){
                nums[i+1] = nums[j];
                i++;
                j++;
            }
        }
        return i+1;
        
    }
};