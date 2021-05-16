Question Link : https://leetcode.com/problems/check-if-a-string-can-break-another-string/

//Solution by Amreen

class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i,l=s2.length();
        bool f1=true,f2=true;
        for(i=0;i<l;i++)
        {
            if(s2[i]<s1[i])
                f1=false;
            if(s1[i]<s2[i])
                f2=false;
        }
        if(f1||f2)
        return true;
        return false;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    bool prefixsum(int c1[],int c2[])
    {
        int i,pre1=0,pre2=0;
        for(i=0;i<26;i++)
        {
            pre1+=c1[i];
            pre2+=c2[i];
            if(pre2<pre1)
                return false;
        }
        return true;
    }
    bool checkIfCanBreak(string s1, string s2) {
        int freq1[26]={0};
        int freq2[26]={0};
        int i,l=s1.length();
        for(i=0;i<l;i++)
        {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        return prefixsum(freq1,freq2)||prefixsum(freq2,freq1);
    }
};
