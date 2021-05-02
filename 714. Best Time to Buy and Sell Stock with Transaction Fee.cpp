Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

//Solution by Amreen

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int c = 0, h = -prices[0],i,n=prices.size();
        for(i=0;i<n;i++)
        {
            c = max(c,h+prices[i]-fee);
            h = max(h,c-prices[i]);
        }
        return c;
    }
};
