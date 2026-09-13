class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(2*n);
        int cnt=0;
      
        for(int i = 0;i<nums.size();i++){
            
            arr[i]=nums[i];
            arr[i+n]= nums[i];
        }
        return arr;
        
    }
};