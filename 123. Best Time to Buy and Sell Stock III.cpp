Question Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

//Solution by Amreen

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,n=prices.size();
        vector<int>pr(n,0);
        int map = prices[n-1],mip = prices[0];
        for(i=n-2;i>=0;i--)
        {
            map = max(map,prices[i]);
            pr[i] = max(pr[i+1],map-prices[i]);
        }
        for(i=1;i<n;i++)
        {
            mip = min(mip,prices[i]);
            pr[i] = max(pr[i-1],pr[i]+prices[i]-mip);
        }
        return pr[n-1];
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,n=prices.size();
        int stdind=0,endind=0,tmp=0,minp=INT_MAX,maxpr=0;
        for(i=0;i<n;i++)
        {
            if(prices[i]<minp)
            {
                minp = prices[i];
                tmp = i;
            }
            int curp = prices[i]-minp;
            if(curp>maxpr)
            {
                stdind = tmp;
                endind = i;
                maxpr = curp;
            }
        }
        int maxp1=0,maxp2=0;
        minp=INT_MAX;
        for(i=0;i<stdind;i++)
        {
            minp = min(minp,prices[i]);
            maxp1 = max(maxp1,prices[i]-minp);
        }
        minp=INT_MAX;
        for(i=endind+1;i<n;i++)
        {
            minp = min(minp,prices[i]);
            maxp2 = max(maxp2,prices[i]-minp);
        }
        int map=0,maxl=0;
        for(i=stdind;i<=endind;i++)
        {
            map = max(map,prices[i]);
            maxl = max(maxl,map-prices[i]);
        }
        return maxpr+max(maxp1,max(maxp2,maxl));
    }
};
