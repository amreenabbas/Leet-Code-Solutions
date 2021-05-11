Question Lik : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/

//Solution by Amreen

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c=0,pc=0,h=INT_MIN;
        bool sold = false;
        for(int p:prices)
        {
            if(!sold && c-p > h)
                h = c-p;
            else if(pc-p>h)
                h = pc-p;
            pc = c;
            if(h+p>c)
            {
                c = h+p;
                sold = true;
            }
            else
                sold = false;
        }
        return c;
    }
};
