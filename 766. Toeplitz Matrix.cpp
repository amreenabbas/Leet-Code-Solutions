Question Link : https://leetcode.com/problems/toeplitz-matrix/

//Solution by Amreen

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i,j,n=matrix.size(),m=matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i-1>=0 &&j-1>=0)
                {
                    if(matrix[i][j]!=matrix[i-1][j-1])
                        return false;
                }
            }
        }
        return true;
    }
};
