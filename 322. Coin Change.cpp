Question Link : https://leetcode.com/problems/coin-change/

//Solution by Amreen

class Solution {
public:
    int min(int a, int b)
    {
        if (a<b)
            return a;
        return b;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int i,j;
        int dp[amount+1];
        for(i=0;i<=amount;++i)
            dp[i] = INT_MAX;
        dp[0] = 0;
        for ( i = 1; i <= amount; ++i) {
        for ( j = 0; j < n; ++j) {
        if (coins[j] <= i) 
        {
           int t = dp[i-coins[j]];
           if(t!= INT_MAX && (t+1)<dp[i])
           dp[i] = t+1;
        }
           
      }
    }  
        if(dp[amount] == INT_MAX)
            return -1;
        return dp[amount];
    }  
};
