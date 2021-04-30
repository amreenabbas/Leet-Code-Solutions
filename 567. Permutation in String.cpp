Question Link : https://leetcode.com/problems/permutation-in-string/

//Solution by Amreen

class Solution {
public:
    bool checkInclusion(string p, string s) {
        int pattern[26]={0};
        int sentence[26]={0};
        int i, m = p.length(), n = s.length(),c = 0;
        if(m>n)
            return false;
        for(i=0;i<m;i++)
        {
            pattern[p[i]-'a']++;
            sentence[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(pattern[i] == sentence[i])
                c++;
        }
        for(i=m;i<n;i++)
        {
            if(c == 26)
                return true;
            int  curr = s[i]-'a';
            if(sentence[curr]+1 == pattern[curr])
                c++;
            sentence[curr]++;
            if(sentence[curr] == pattern[curr]+1)
                c--;
            int last = s[i-m]-'a';
            if(sentence[last]-1 == pattern[last])
                c++;
            sentence[last]--;
            if(sentence[last]+1 == pattern[last])
                c--;
        }
        if(c == 26)
            return true;
        return false;
    }
};
