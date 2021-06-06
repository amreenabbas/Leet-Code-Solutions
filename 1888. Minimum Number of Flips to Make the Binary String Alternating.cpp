Question Link : https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/

//Solution by Amreen

class Solution {
public:
    int minFlips(string s) {
        int i,n=s.size(),a1=0,a2=0,ans=INT_MAX,m=2*n;
        string s1,s2;
        s+=s;
        for(i=0;i<m;i++)
        {
            s1+= i%2?'1':'0';
            s2+= i%2?'0':'1';
        }
        for(i=0;i<m;i++)
        {
            if(s[i]!=s1[i])
                ++a1;
            if(s[i]!=s2[i])
                ++a2;
            if(i>=n)
            {
                if(s[i-n]!=s1[i-n])
                    --a1;
                if(s[i-n]!=s2[i-n])
                    --a2;
            }
            if(i>=n-1)
            ans=min({ans,a1,a2});
        }
        return ans;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int minFlips(string s) {
        int i,n=s.length();
        vector<vector<int>>cnt(2,vector<int>(2,0));
        for(i=0;i<n;i++)
            cnt[s[i]-'0'][i%2]++;
        int c1,c2,ans;
        c1 = cnt[0][0]+cnt[1][1];
        c2 = cnt[0][1]+cnt[1][0];
        ans=min(c1,c2);
        for(i=0;i<n;i++)
        {
            cnt[s[i]-'0'][i%2]--;
            cnt[s[i]-'0'][(n+i)%2]++;
            c1=cnt[0][0]+cnt[1][1];
            c2 = cnt[0][1]+cnt[1][0];
            ans=min({ans,c1,c2});
        }
        return ans;
    }
};
