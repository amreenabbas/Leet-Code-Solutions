Question Link : https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

//Solution by Amreen

class Solution {
public:
    string smallestSubsequence(string s) {
        
        int c[26] = {0};
        stack<char>st;
        int i,n = s.length();
        for(i=0;i<n;i++)
            c[s[i]-'a']++;
        vector<bool>vis(26,false);
        for(char ch:s)
        {
            c[ch-'a']--;
            if(!vis[ch-'a'])
            {
                while(!st.empty() && st.top()>ch && c[st.top()-'a']>0)
                {
                    vis[st.top()-'a'] = false;
                    st.pop();
                }
                st.push(ch);
                vis[ch-'a'] = true;
            }
            
        }
        string ans="";
        while(!st.empty())
        {
            ans = st.top()+ans;
            st.pop();
        }
    return ans;
    }
};
