Question Link : https://leetcode.com/problems/break-a-palindrome/

//Solution by Amreen

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int i,n=palindrome.length(),f=0;
        if(n==1)
            return "";
        string ans="";
        int o = n%2;
        for(i=0;i<n;i++)
        {
            if(palindrome[i]!='a'&&!f &&!(o&&i==n/2))
            {
                ans+='a';
                f=1;
            }   
            else
                ans+=palindrome[i];
        }
        if(f==0)
        {     
            ans.pop_back();
            ans+='b';
        }
        return ans;
    }
};
