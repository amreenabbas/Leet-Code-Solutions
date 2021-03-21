Question Link : https://leetcode.com/problems/longest-palindromic-substring/

//Solution by Amreen

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int i,maxl=1,start = 0,l,h,len;
        for(i=1;i<n;i++)
        {
            l = i-1;
            h = i;
            while(l>=0 && h<n&&s[l]==s[h])
            {
                len = h-l+1;
                if(len>maxl)
                {
                    maxl = len;
                    start = l;
                }
                l--;
                h++;
            }
            l=i-1;
            h=i+1;
            while(l>=0 && h<n&&s[l]==s[h])
            {
                len = h-l+1;
                if(len>maxl)
                {
                    maxl = len;
                    start = l;
                }
                l--;
                h++;
            }
                
        }
        return s.substr(start,maxl);
        
    }
};
