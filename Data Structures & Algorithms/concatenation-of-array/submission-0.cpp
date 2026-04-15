class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>prevAns = nums;
        for(int i =0;i<nums.size();i++){
            prevAns.push_back(nums[i]);
        }
        return prevAns;
    }
};