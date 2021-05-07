Question Link : https://leetcode.com/problems/grumpy-bookstore-owner/

//Solution by Amreen

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int maxs=0,sats=0,maxsat=0;
        int i,n=grumpy.size();
        for(i=0;i<n;i++)
            maxs+=(!grumpy[i]?customers[i]:0);
        for(i=0;i<X && i<n;i++)
        {
            if(grumpy[i])
            sats+=customers[i];
        }
        maxsat = sats;
        for(i=X;i<n;i++)
        {
            sats = sats-(grumpy[i-X]?customers[i-X]:0)+(grumpy[i]?customers[i]:0);
            maxsat = max(maxsat,sats);   
        }
        return maxs+maxsat;
    }
};
