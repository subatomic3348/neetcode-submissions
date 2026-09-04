class Solution {
public:

    bool palang(string &s, int i , int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return  true;
    }
    bool validPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
               return palang(s,i+1,j) || palang(s,i,j-1);
               
            }
            i++;
            j--;
        }
        return true;
        
    }
};