class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>arr;
        int cnt=0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            
            arr.push_back(nums[i]);

            if(i==n-1&&cnt!=1){
                cnt++;
                i = -1;
            }
        }
        return arr;
        
    }
};