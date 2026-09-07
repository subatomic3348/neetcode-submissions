class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k = nums.size()-1;
        set<vector<int>>set;
        
        for(int i =0;i<nums.size();i++){
           int j = i+1;
           k = nums.size()-1;
          while(j<k){
                
              if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>ans({nums[i],nums[j],nums[k]});
                    sort(ans.begin(),ans.end());
                    set.insert(ans);
                    j++;
                     

                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
          }
        
           
            
        }
        vector<vector<int>>res(set.begin(),set.end());
        return res;

        
    }
};
