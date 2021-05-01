Question Link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

//Solution by Amreen

class Solution {
public:
    bool check(vector<int>& weights, int D, int cap)
    {
        int i,d=1,n=weights.size(),s=0;
        for(i=0;i<n;i++)
        {
            s+=weights[i];
            if(s>cap)
            {
                s=weights[i];
                d++;
            }   
            if(d>D)
                return false;
        }
        return true;
    }
    int binsearch(vector<int>& weights,int l, int h, int D)
    {
        int ans = 0;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            int ch = check(weights,D,m);
            if(ch)
            {
                h = m-1;
                ans = m;
            }    
            else
                l = m+1;
        }
        return ans;
    }
    int shipWithinDays(vector<int>& weights, int D) {
    int i,n=weights.size(),sum=0,maxw=0;
        for(i=0;i<n;i++)
        {
            if(maxw<weights[i])
                maxw = weights[i];
            sum+=weights[i];
        }
       return binsearch(weights,maxw,sum,D);
    }
};
