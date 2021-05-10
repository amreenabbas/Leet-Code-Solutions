Question Link : https://leetcode.com/problems/find-common-characters/

//Solution by Amreen

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int m[26] = {0};
        for(char ch:A[0])
            m[ch-'a']++;
        for(string w:A)
        {
            int f[26] = {0};
            for(char ch:w)
                f[ch-'a']++;
            for(int i=0;i<26;i++)
            m[i] = min(m[i],f[i]);
        }
        vector<string> ans;
        for(int i=0;i<26;i++)
        {
            if(m[i] == 0)
                continue;
            for(int j=0;j<m[i];j++)
            {
                char c = i+'a';
                string h(1,c);
                ans.push_back(h);
            }    
        }
        return ans;
    }
};
