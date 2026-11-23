class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int k=0,l=matrix.size()-1;

    
        while(k<=l){
            int mid1 = (k+l)/2;
            int i =0,j=matrix[mid1].size()-1;
            while(i<=j){
                int mid = (i+j)/2;
                if(matrix[mid1][mid]==target){
                    return true;
                }
                else if(matrix[mid1][mid]>target){
                    j = mid-1;
                }
                else{
                    i = mid+1;
                }
            }
            if(matrix[mid1][0]>target){
                l = mid1-1;
            }
            else if(matrix[mid1][0]<target){
                    k= mid1+1;
            }
           

        }
        return false;
        
    }
};
