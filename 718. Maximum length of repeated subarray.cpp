Question Link : https://leetcode.com/problems/maximum-length-of-repeated-subarray/

//Solution by Amreen

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int i,j,n=A.size(),m=B.size(),ans=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                if(A[i] == B[j])
                {
                    dp[i][j] = dp[i+1][j+1]+1;
                    ans = max(ans,dp[i][j]);
                }
            }    
        }
        return ans;
    }
};
