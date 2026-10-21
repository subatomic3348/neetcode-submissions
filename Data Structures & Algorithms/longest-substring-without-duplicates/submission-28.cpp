class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
            
        set<char>set;
        int longest = 0;
        for(int j =0;j<s.size();j++){
            if(set.find(s[j])!=set.end()){
                while(set.find(s[j])!=set.end()){
                    set.erase(s[i]);
                    i++;
                }

                  
                
            }
            
            set.insert(s[j]);
            
            longest = max(longest,j-i+1);
        }
        return longest;
        
        
        
        
    }
};
