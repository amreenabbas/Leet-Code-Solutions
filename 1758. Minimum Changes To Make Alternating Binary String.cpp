Question Link : https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/

//Solution by Amreen

class Solution {
public:
    int minOperations(string s) {
        int i,n=s.length();
        string ans1="",ans2="";
        for(i=1;i<=n;i++)
        {
            if(i%2)
            {
                ans1+="1";
                ans2+="0";
            }
            else
            {
                ans1+="0";
                ans2+="1";
            }
        }
        int c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(ans1[i]!=s[i])
                c1++;
            if(ans2[i]!=s[i])
                c2++;
        }
        return min(c1,c2);
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int minOperations(string s) {
        int i,n=s.length();
        int c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(i%2)
            {
                c1+=(s[i]-'0')^0;
                c2+=(s[i]-'0')^1;
            }
            else
            {
                c1+=(s[i]-'0')^1;
                c2+=(s[i]-'0')^0;
            }
        }
        return min(c1,c2);
    }
};
