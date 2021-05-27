Question Link : https://leetcode.com/problems/reverse-string-ii/

//Solution by Amreen

class Solution {
public:
    string reverseStr(string s, int k) {
        string ans=s;
        int i,n=s.length();
        for(i=0;i<n;i+=(2*k))
        {
            int st=i,end=min(i+k-1,n-1);
            while(st<end)
            {
                char t=ans[st];
                ans[st++]=ans[end];
                ans[end--]=t;
            }
        }
        return ans;
    }
};
