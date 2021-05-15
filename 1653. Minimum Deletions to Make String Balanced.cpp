Question Link : https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/

//Solution by Amreen

class Solution {
public:
    int minimumDeletions(string s) {
        int i,n=s.length();
        int a=0,b=0,ans=0,minv=INT_MAX;
        for(char ch:s)
        {
            if(ch=='a')
                a++;
        }
        for(char ch:s)
        {
            if(ch=='a')
                a--;
            if(ch=='b')
            {
                ans=a+b;
                minv = min(minv,ans);
                b++;
            }
        }
        minv=min(minv,b);
        return min(minv,ans);
    }
};
