class Solution {
public:
    bool isPathCrossing(string path) {
        int x,y=0;
        set<string>visited;
        visited.insert(to_string(x)+","+to_string(y));

        for(int i =0;i<path.size();i++){
            if(path[i]=='N'){
             y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='W'){
                x--;
            }
            else if(path[i]=='E'){
                x++;
            }
            string point = to_string(x) + "," + to_string(y);
            if(visited.find(point)!=visited.end()){
                return true;
            }
            visited.insert(point);
        }
        return false;
        
    }
};