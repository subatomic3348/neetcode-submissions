class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int i = 0;
        int j = s1.size()-1;
        while(j<s2.size()&&j>=i){
            string s3 = s2.substr(i,j-i+1);
            sort(s3.begin(),s3.end());
            cout<<s3<<endl;
            if(s3==s1){
                return true;
            }
            j++;
            i++;
        }
        return false;                             
    }
};
