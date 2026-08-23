class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        int dx=coordinates[1][0]-x1;
        int dy=coordinates[1][1]-y1;
        for(int i=2;i<coordinates.size();i++){
            int x=coordinates[i][0];
            int y=coordinates[i][1];
            if((y-y1)*dx!=(x-x1)*dy){
            return false;
            }
        }
            return true;
        
        
    }
};