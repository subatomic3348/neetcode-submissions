class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        vector<int>ans;
        map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        // for(int i =0;i<nums.size();i++){
        //     if(nums[i]>maxi){
        //         maxi = nums[i];

        //     }
        //     if(nums[i]<mini){
        //         mini = nums[i];
        //     }

        // }
        // nums[0] = mini;
        // nums[nums.size()-1] = maxi;
        // for(int i =1;i<nums.size()-1;i++){

        // }
        int j =0;
        for(auto it : mpp){
                while(it.second){
                    nums[j] = it.first;
                    j++;
                    it.second--;
                }
        }
        // for(auto it : mpp){
        //     ans.push_back(it.first);
        // }
        return nums;
        
       
        
    }
};