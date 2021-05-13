Question Link : https://leetcode.com/problems/defuse-the-bomb/

//Solution by Amreen

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int i,n=code.size(),j=0;
        vector<int>ans(n,0);
        if(k==0)
            return ans;
        vector<int>v(3*n,0);
        for(i=n;i<2*n;i++)
            v[i] = code[i-n];
        for(i=0;i<n;i++)
            v[i]=code[i];
        for(i=2*n;i<3*n;i++)
            v[i]=code[i-2*n];
        if(k<0)
        {
            int c=0,sum=0;
            for(i=n+k;c<-k;i++,c++)
                sum+=v[i];
            for(i=n,c=0;c<n;c++,i++)
            {
                ans[c] = sum;
                sum-=v[i+k];
                sum+=v[i];
            }
        }
        else
        {
            int c=0,sum=0;
            for(i=2*n+k-1;c<k;c++,i--)
                sum+=v[i];
            for(c=n-1;c>=0;c--,i--)
            {
                ans[c] = sum;
                sum-=v[i+k];
                sum+=v[i];
            }
        }
        return ans;
        
    }
};
