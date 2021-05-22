Question Link : https://leetcode.com/problems/add-binary/

//Solution by Amreen

class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.length(),n=b.length(),i=m-1,j=n-1;
        string ans="";
        int c=0;
        while(i>=0 || j>=0)
        {
            int ca=i>=0?a[i]-'0':0;
            int cb=j>=0?b[j]-'0':0;
            int sum=ca+cb+c;
            char s;
            if(sum == 3)
            {
                s='1';
                c=1;
            }
            if(sum==2)
            {
                s='0';
                c=1;
            }
            if(sum==1)
            {
                s='1';
                c=0;
            }
            if(sum==0)
            {
                s='0';
                c=0;
            }
            ans =s+ans;
            i--;
            j--;
            
        }
        if(c==1)
            ans='1'+ans;
        return ans;
    }
};
