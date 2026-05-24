class Solution {
public:
    void merge(vector<int>&arr,int low ,int mid ,int high){
        vector<int>temp;
        int i = low;
        int j = mid+1;
        while(i<=mid&&j<=high){
           if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
           }
           else if(arr[i]>=arr[j]){
            temp.push_back(arr[j]);
            j++;
           }
           
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int k =low;k<=high;k++){
            arr[k] = temp[k-low];
        }


    }
     void mergeSort(vector<int>&arr,int low,int high){
      if(low>=high){
        return;
      }
      int mid = (low+high)/2;
      mergeSort(arr,low,mid);
      mergeSort(arr,mid+1,high);
      merge(arr,low,mid,high);
     }
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        mergeSort(nums,low,high);
        return nums;
        
    }
};