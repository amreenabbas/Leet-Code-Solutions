Question Link : https://leetcode.com/problems/min-cost-climbing-stairs/

//Solution by Amreen

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i,n=cost.size();
        vector<int>dp(n+1,0);
        dp[0] = 0;
        dp[1] = 0;
        for(i=2;i<=n;i++)
        {
            dp[i] = min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[n];
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i,n=cost.size();
        int v1 = 0;
        int v2 = 0;
        int mincost;
        for(i=2;i<=n;i++)
        {
            mincost = min(v1+cost[i-1],v2+cost[i-2]);
            v2 = v1;
            v1 = mincost;
        }
        return mincost;
    }
};
