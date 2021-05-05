Question Link : https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/

//Solutiob by Amreen

class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int i,j,m=s1.length(),n=s2.length();
        int dp[m+1][n+1];
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1]+s1[i-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        int sum1=0,sum2=0;
        for(i=0;i<m;i++)
            sum1+=s1[i];
        for(i=0;i<n;i++)
            sum2+=s2[i];
        return sum1+sum2-2*dp[m][n];
    }
};
