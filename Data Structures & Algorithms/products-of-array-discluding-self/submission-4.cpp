class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            ans.push_back(0);
        }
        bool nonZero = false;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                nonZero = true;
            }
        }
        if(nonZero==false){
            return nums;
        } 
        int onezero = 0;
         for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                onezero++;
            }
         }
         if(onezero>1){
          return  ans;
         }
         int product =1;
        int nonZeroProduct=1;
        for(int i =0;i<nums.size();i++){
            product*=nums[i];
            if(nums[i]!=0){
                nonZeroProduct*=nums[i];
            }
           
        }
        vector<int>ansArray;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                ansArray.push_back(product/nums[i]);
            }
            else{
                ansArray.push_back(nonZeroProduct);
            }
        }
        return ansArray;

    }
};
