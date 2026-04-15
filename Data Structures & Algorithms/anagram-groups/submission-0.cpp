class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        /* so apprently it is the fansy way to use the for loop without using any dataype
        or any increament operator*/
        for(const auto&s :strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            map[sortedS].push_back(s);
        }
        vector<vector<string>>res;
        for(auto& pair:map){
            res.push_back(pair.second);
        }
        return  res;



        
    }
};
