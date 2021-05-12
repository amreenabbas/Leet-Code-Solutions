Question Link : https://leetcode.com/problems/valid-palindrome/

//Solution by Amreen

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,n=s.length(),j=n-1;
        if(n==1)
            return true;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(i<j)
        {
            while((s[i]<'a' || s[i]>'z')&&(s[i]<'0'||s[i]>'9'))
            {
                if(i<j)
                    i++;
                else
                    break;
            }
                
            while((s[j]<'a' || s[j]>'z')&&(s[j]<'0'||s[j]>'9'))
            {
                if(j>i)
                    j--;
                else break;
            }
            if(i==j) 
                break;
            if(s[i]!=s[j])
                return false;
            i++;
            j--;      
        }
        return true;
    }
};
