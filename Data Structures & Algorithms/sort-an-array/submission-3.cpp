class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
       
        int j =0;
        for(auto it : mpp){
                while(it.second){
                    nums[j] = it.first;
                    j++;
                    it.second--;
                }
        }
       
        return nums;
        
       
        
    }
};