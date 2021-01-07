Question Link : https://leetcode.com/problems/check-if-it-is-a-straight-line/

//created by Amreen

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 2)
            return true;
        int m1 = coordinates[0][1]-coordinates[1][1];
        int m2 = coordinates[0][0]-coordinates[1][0];
        double  s = (double)m1/m2;
        
        for(int i = 1; i < coordinates.size()-1; i++)
        {
            int a1 = coordinates[i][1]-coordinates[i+1][1];
            int a2 = coordinates[i][0]-coordinates[i+1][0];
            double  s2 = (double)a1/a2;
            if(s2 != s)
                return false;
        }
        return true;
    }
};
