Question Link : https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

//Solution by Amreen

class Solution {
public:
    bool isvalid(int i, int j, int m, int n)
    {
        if(i>=0 && i<n && j>=0 && j<m)
            return true;
        return false;
    }
    int xdir[4] = {0,0,-1,1};
    int ydir[4] = {-1,1,0,0};
    int dfs(vector<vector<int>>& matrix,vector<vector<int>>& dp, int i, int j)
    {
        int n=matrix.size(),m=matrix[0].size();
        if(dp[i][j]>0)
            return dp[i][j];
        int r,x,y;
        for(r=0;r<4;r++)
        {
            x=i+xdir[r];
            y=j+ydir[r];
            if(isvalid(x,y,m,n)&&matrix[x][y]>matrix[i][j])
            {
                dfs(matrix,dp,x,y);
                dp[i][j]=max(dp[x][y]+1,dp[i][j]);
            }
        }
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int i,j,maxr=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                maxr=max(maxr,dfs(matrix,dp,i,j));
            }
        }
        return maxr+1;
    }
};
