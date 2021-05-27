Question Link : https://leetcode.com/problems/replace-all-digits-with-characters/

//Solution by Amreen

class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        int i,n=s.length();
        for(i=0;i<n;i++)
        {
            int c = s[i]-'0';
            if(i%2==1)
                ans+=(char) (s[i-1]+c);
            else
                ans+=s[i];
        }
        return ans;
    }
};
