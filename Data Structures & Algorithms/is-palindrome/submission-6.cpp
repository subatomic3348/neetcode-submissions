class Solution {
public:
    bool isPalindrome(string s) {
       
       string s1 = "";
       for(int i :s){
         s1+=tolower(i);
       }

    
        int i =0;
        int j = s1.size()-1;
        while(i<j){
          
            if(!((s1[i]>=65&&s1[i]<=90) || (s1[i]>=97&&s1[i]<=122) || (s1[i]>=48&&s1[i]<=57))){
                i++;
                continue;
            
            }
                 if(!((s1[j]>=65&&s1[j]<=90) || (s1[j]>=97&&s1[j]<=122)|| (s1[j]>=48&&s1[j]<=57))){
                    
                j--;
                continue;
                
            }
            else if(s1[i]!=s1[j]) {
                cout<<s1[i];
                cout<<s1[j];
                return false;
            }
            i++;
            j--;

        }
      return true;
        
    }
};
