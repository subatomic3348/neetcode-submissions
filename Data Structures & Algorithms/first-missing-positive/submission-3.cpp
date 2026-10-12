class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int large = nums[nums.size()-1];
        if(large<1){
            return 1;
        }
        set<int>set;
                int notNeg = -1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>=0){
                notNeg = i;
                break;
            }
        }

        for(int i =notNeg;i<nums.size();i++){
            set.insert(nums[i]);
        }

        for(int i = 1;i<=large+1;i++){
            if(set.find(i)==set.end()){

                return i;
            }
        }
        return -1;
        
    }
};