Question Link : https://leetcode.com/problems/remove-palindromic-subsequences/

//Solution by Amreen

class Solution {
public:
    int removePalindromeSub(string s) {
        int i,n=s.length(),ca = 0,f=0;
        for(i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
                f++;
        }
        for(char ch:s)
        {
            if(ch=='a')
                ca++;
        }
        int cb = n-ca;
        if(f==0)
            return 1;
        if(ca>0 && cb>0)
            return 2;
        return 1;
    }
};
