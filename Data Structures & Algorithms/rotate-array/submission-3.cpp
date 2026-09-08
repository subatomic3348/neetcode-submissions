class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        // [8,7,6,5,4,3,2,1]

        // [1,2,3,4,5] k = 7
     k = k%nums.size();

    
            
        int i = 0;
        int j = k-1;
        int m = k;
        int n = nums.size()-1;

        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        while(m<n){
            swap(nums[m],nums[n]);
            m++;
            n--;
        }
    }
};