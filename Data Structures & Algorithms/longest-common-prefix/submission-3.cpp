class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i =0;i<strs.size();i++){
            ans+=strs[i];
        }
        if(strs.size()==1){
            return ans;
        }
        int i =0,j=0;
        string tempAns="";
        while(i<strs[0].size()&&j<strs[1].size()){
            if(strs[0][i]==strs[1][j]){
                tempAns+=strs[0][i];
                i++;
                j++;
            }
            else{
                break;
            }
        }
        if(tempAns.empty()){
            return "";
        }
        for(int i =2;i<strs.size();i++){
            string sortAns ="";
            int j = tempAns.size()-1,k=tempAns.size()-1;
            while(j>=0&&k>=0){
                if(strs[i][j]!=tempAns[k]){
                    j--;
                    k--;
                }
                else{
                    sortAns+=strs[i][j];
                    j--;
                    k--;

                }
            }
        
            reverse(sortAns.begin(),sortAns.end());
            tempAns=sortAns;
        }
        return tempAns;

        
    }
};