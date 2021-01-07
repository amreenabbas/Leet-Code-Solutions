Question Link : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

//created by js0805
//Brute force approach
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
            for(int i=grid.size()-1;i>=0;i--)
            {
                for(int j=grid[i].size()-1;j>=0;j--)
                {
                    if(grid[i][j]<0)
                    {
                        sum++;
                    }
                    else
                        break;
                }
            }
        return sum;
        
    }
};

    
