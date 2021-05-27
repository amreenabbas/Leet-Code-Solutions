Question Link : https://leetcode.com/problems/binary-gap/

//Solution by Amreen

class Solution {
public:
    int binaryGap(int n) {
        string bin="";
        while(n>0)
        {
            int r = n%2;
            bin = (char)(r+'0')+bin;
            n/=2;
        }
        int i,j=0,maxd=0,l=bin.length();
        bool f=false;
        for(i=0;i<l;i++)
        {
            if(bin[i]=='1' &&!f)
            {
                j=i;
                f=true;
            }
            else if(bin[i]=='1'&&f)
            {
                maxd = max(maxd,i-j);
                j=i;
            }
        }
        return maxd;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int binaryGap(int n) {
        int i,j=-1,maxd=0;
        for(i=0;i<32;i++)
        {
            if(((n>>i)&1)>0)
            {
                if(j>=0)
                   maxd = max(maxd,i-j);
                j=i; 
            }   
        }
        return maxd;
    }
};
