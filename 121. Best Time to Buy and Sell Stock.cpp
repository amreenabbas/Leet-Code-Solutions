Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Solution by Amreen

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0,i=0,n=prices.size();
        int p,v=INT_MAX;
        while(i<n)
        {
           if(prices[i]<v)
               v = prices[i];
            else if(prices[i]-v>maxp)
                maxp = prices[i]-v;
            i++;
        }
        return maxp;
    }
};
