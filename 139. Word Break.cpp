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
