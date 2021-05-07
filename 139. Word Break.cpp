Question Link : https://leetcode.com/problems/word-break/

//Solution by Amreen

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> dict;
        int l = s.length();
        vector<bool>dp(l+1,false);
        if(l == 0)
            return true;
        int i,j,n=wordDict.size();
        for(string word:wordDict)
        {
            dict[word]++;
        }
        dp[0] = true;
        for(i=1;i<=l;i++)
        {
            for(j=0;j<i;j++)
            {
                if(dp[j] && dict.find(s.substr(j,i-j)) != dict.end())
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[l];
    }
};

//Alternate solution by Amreen

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> dict;
        int l = s.length();
        vector<bool>dp(l+1,false);
        vector<int>ind;
        ind.push_back(-1);
        if(l == 0)
            return true;
        int i,j,n=wordDict.size();
        for(string word:wordDict)
        {
            dict[word]++;
        }
        dp[0] = true;
        for(i=0;i<=l;i++)
        {
            int m = ind.size();
            bool f = false;
            for(j=m-1;j>=0;j--)
            {
                if(dict.find(s.substr(ind[j]+1,i-ind[j])) != dict.end())
                {
                    f=true;
                    dp[i] = true;
                    ind.push_back(i);
                    break;
                }
            }
        }
        return dp[l];
    }
};
