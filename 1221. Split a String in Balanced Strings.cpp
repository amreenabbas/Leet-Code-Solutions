Question Link : https://leetcode.com/problems/split-a-string-in-balanced-strings/

//Solution by Amreen

class Solution {
public:
    int balancedStringSplit(string s) {
        int i,n=s.length(),res=0,cnt=0;
        if(n==1)
            return 0;
        char st = s[0];
        for(char c:s)
        {
            (c==st)?cnt++:cnt--;
            if(cnt==0)
                res++;
        }
        return res;
    }
};
