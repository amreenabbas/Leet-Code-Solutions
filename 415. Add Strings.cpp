Question Link : https://leetcode.com/problems/add-strings/

//Solution by Amreen

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.length(),m=num2.length(),i=n-1,j=m-1,c=0;
        string ans="";
        while(i>=0||j>=0)
        {
            int s1=i>=0?num1[i]-'0':0;
            int s2=j>=0?num2[j]-'0':0;
            int sum=s1+s2+c;
            char ch=(char)((sum%10)+48);
            ans=ch+ans;
            c=sum/10;
            i--;
            j--;
        }
        if(c>0)
        {
            char ch=(char)(c+48);
            ans=ch+ans;
        }
        return ans;
    }
};
