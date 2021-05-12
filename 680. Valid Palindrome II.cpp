Question Link : https://leetcode.com/problems/valid-palindrome-ii/

//Solution by Amreen

class Solution {
public:
    bool ispalin(string s,int st, int end)
    {
        int i=st,j=end;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,n=s.length(),j=n-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return ispalin(s,i,j-1)||ispalin(s,i+1,j);
            i++;
            j--;
        }
        return true;
    }
};
