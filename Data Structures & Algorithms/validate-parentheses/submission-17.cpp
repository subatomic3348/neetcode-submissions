class Solution {
public:
    bool isValid(string s) {
        stack<int>stack;
        int i =0;
        while(i<s.size()){
            if(stack.empty()==false&&s[i]==')'){
                if(stack.top()!='('){
                    return false;
                }
                else{
                    stack.pop();
                }
                
            }
          else if(stack.empty()==false&&s[i]=='}'){
                if(stack.top()!='{'){
                    return false;
                }
                else{
                    stack.pop();
                }
                

            }

           else if(stack.empty()==false&&s[i]==']'){
                if(stack.top()!='['){
                    return false;
                }
                else{
                    stack.pop();
                }
                

            }
            else {
                stack.push(s[i]);
            }
            i++;


        }
        return stack.empty();
        
    }
};
