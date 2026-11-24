class Solution {
public:
     int sum(vector<int>ans, double a){
       double  add =0;
        for(int i =0;i<ans.size();i++){
            add+=ceil(ans[i]/a);
        }
        return add;
     }

   

    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum1 = 0;
        for(int i =0;i<piles.size();i++){
            sum1+=piles[i];
        }
        
        long long low = 1;
        long long high = sum1;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(sum(piles,mid)<=h){
                high = mid-1;
            }
            else if(sum(piles,mid>h)){
                low = mid+1;
            }
            
            
        }
        return low;
    }
};
