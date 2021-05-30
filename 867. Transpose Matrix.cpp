Question Link : https://leetcode.com/problems/transpose-matrix/

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j,m=matrix.size(),n=matrix[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                ans[j][i]=matrix[i][j];
        }
        return ans;
    }
};
