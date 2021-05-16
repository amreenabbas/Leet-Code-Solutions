Question Link : https://leetcode.com/problems/coin-change-2/

//Solution by Amreen

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int s=coins.size(),i,j;
        vector<vector<int>>dp(amount+1,vector<int>(s,0));
        for(i=0;i<s;i++)
            dp[0][i] = 1;
        for(i=1;i<=amount;i++)
        {
            for(j=0;j<s;j++)
            {
                int x = i>=coins[j]?dp[i-coins[j]][j]:0;
                int y = j>0?dp[i][j-1]:0;
                dp[i][j] = x+y;
            }
        }
        return dp[amount][s-1];
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int s=coins.size(),a;
        vector<int>dp(amount+1,0);
        dp[0] = 1;
        for(int c:coins)
        {
            for(a=c;a<=amount;a++)
                dp[a]+=dp[a-c];
        }
        return dp[amount];
    }
};
