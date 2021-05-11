Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

//Solution by Amreen

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int i,n=prices.size();
        vector<int> buy(k+1,INT_MIN),sell(k+1,0);
        for(int p:prices)
        {
            for(i=k;i>0;i--)
            {
                buy[i] = max(buy[i],sell[i-1]-p);
                sell[i] = max(sell[i],buy[i]+p);
            }
        }
        return sell[k];
    }
};
