class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>stack;
        int i =0;
        while(i<asteroids.size()){
             if(stack.empty()){
                stack.push(asteroids[i]);

                i++;
             }
             else{
                if(asteroids[i]>0||stack.top()*asteroids[i]>0){
                    stack.push(asteroids[i]);
                    i++;
                }
                else{
                   
                    while(i<asteroids.size()&&stack.empty()==false&&asteroids[i]<0&&stack.top()*asteroids[i]<0){
                     if(abs(stack.top())<abs(asteroids[i])){
                        stack.pop();
                    
                     }
                     else if(abs(stack.top())==abs(asteroids[i])){
                            stack.pop();
                            i++;
                     }
                     else{
                        i++;
                     }
                    


                    }
                    

                }

             }
        }
        vector<int>ans;

        while(!stack.empty()){
            ans.push_back(stack.top());
            stack.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};