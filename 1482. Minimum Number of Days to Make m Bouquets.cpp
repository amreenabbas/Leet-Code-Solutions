Question Link : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

//Solution by Amreen

class Solution {
public:
    bool poss(vector<int>&bloomDay, int m, int k, int mid)
    {
        int c=0,i=0,n=bloomDay.size();
        while(i<n)
        {
            if(bloomDay[i]<=mid)
                c++;
            else
                c=0;
            if(c==k)
            {
                m--;
                c=0;
            }
            if(m==0)
                break;
            i++;
        }
        return m==0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long req = m*k;
        if(n<req)
            return -1;
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int ans;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(poss(bloomDay,m,k,mid))
            {
                ans=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};
