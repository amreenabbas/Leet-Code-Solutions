Question link : https://leetcode.com/problems/palindrome-partitioning/

//Solution by Amreen

class Solution {
public:
    void palindromic(string &s,vector<vector<string>>&result,vector<string>&currentlist,vector<vector<bool>>&dp,int start)
    {
        if(start>=s.length())
            result.push_back(currentlist);
             
        for(int end = start;end<s.length();end++)
        {
            if(s[start] == s[end] && (end-start <=2 || dp[start+1][end-1]))
            {
                dp[start][end] = true;
                currentlist.push_back(s.substr(start,end-start+1));
                palindromic(s,result,currentlist,dp,end+1);
                currentlist.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        int length = s.length();
        vector<string> currentlist;
        vector<vector<bool>>dp(length, vector<bool>(length,false));
        palindromic(s,result,currentlist,dp,0);
        return result;
    }
};
