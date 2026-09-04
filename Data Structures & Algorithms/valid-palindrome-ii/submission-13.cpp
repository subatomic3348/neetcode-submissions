class Solution {
public:
    bool palang(string s2){
        string s1 = s2;
        reverse(s1.begin(),s1.end());
         if(s1==s2){
       
         return true;
       } 
       else{
       
       return  false;
       }
    }
    bool validPalindrome(string s) {
        if(palang(s)){
           return true;
        }
        for(int i =0;i<s.size();i++){
            string temp = s.substr(0,i) + s.substr(i+1);
            if(palang(temp)){
                return true;
            }
        }
        return false;
        
    }
};