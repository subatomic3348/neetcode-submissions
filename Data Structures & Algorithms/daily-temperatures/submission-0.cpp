class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {

      stack<pair<int,int>>st;
      vector<int>ans(nums.size(),0);
        for(int i =0;i<nums.size();i++){
            while(!st.empty()&&nums[i]>st.top().first){
                auto comb = st.top();
                st.pop();
                ans[comb.second] = i - comb.second;
            }
            st.push({nums[i],i});
        }
        return ans;      

    }
};
  