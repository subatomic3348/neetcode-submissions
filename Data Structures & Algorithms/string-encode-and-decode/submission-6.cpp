class Solution {
public:
     string encoded = "";
     vector<string>decoded;
    string encode(vector<string>& strs) {
       
        for(int i =0;i<strs.size();i++){
            encoded+= strs[i];
           encoded += '.';
           
        }
        return encoded; 

    }

    vector<string> decode(string s) { 
        
         
        for( int i=0;i<encoded.length();i++){
            string temp = "";
            while(encoded[i]!='.'){
                temp+=encoded[i];
                i++;
            }
           
            decoded.push_back(temp);
        }
        return decoded;
    }
};
