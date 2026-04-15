class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>map;
        vector<int>arr;
        for(int i =0;i<nums.size();i++){
            map[i]=nums[i];

        }
        for(int i =0;i<nums.size();i++){
            int req = target-nums[i];
            for(auto it:map){
                if(it.second==req&&it.first!=i){
                    arr.push_back(it.first);
                    arr.push_back(i);
                    break;
                }
            }
            if(!arr.empty()){
                break;
            }
          
        }
        sort(arr.begin(),arr.end());
        return arr;
        
    }
};
