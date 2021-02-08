Question link : https://leetcode.com/problems/set-matrix-zeroes/submissions/

//Solution by Amreen
    
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowflag = false, colflag = false;
        int i,j,row=matrix.size(),col = matrix[0].size() ;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(matrix[i][j] == 0 && i == 0)
                    rowflag = true;
                
                if(matrix[i][j] == 0 && j == 0)
                    colflag = true;
                
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(i=1;i<row;i++)
        {
            for(j=1;j<col;j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }
        if(colflag)
        {
            for(i=0;i<row;i++)
                matrix[i][0] = 0;
        }
        if(rowflag)
        {
            for(i=0;i<col;i++)
                matrix[0][i] = 0;
        }
    }
};
