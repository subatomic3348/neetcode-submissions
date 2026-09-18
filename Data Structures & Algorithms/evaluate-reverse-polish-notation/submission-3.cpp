class Solution {
public:

    int operation(string a,int b , int c){
        int res = 0;
        if(a=="+"){
            res = (b+c);
        }
        else if(a=="-"){
            res =  (b-c);
        }
        else if(a=="/"){
            res =  b/c;
        }
        else if(a=="*"){
            res =  b*c;
        }
        return res;
        
    }
    int evalRPN(vector<string>& tokens) {

        
      vector<int>ans;
      string current = "";

    for(int i =0;i<tokens.size();i++){
      if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="*"){
        current = tokens[i];
         if(ans.size()!=0){

        int entry = operation(tokens[i],ans[ans.size()-2],ans[ans.size()-1]);
        ans.pop_back();
        ans.pop_back();
          
       ans.push_back(entry);
         }
      }
      else{
        ans.push_back(stoi(tokens[i]));
      }

    }
    return ans[ans.size()-1];

        
    }
};
