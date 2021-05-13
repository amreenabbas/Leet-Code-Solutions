Question Link : https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/

//Solution by Amreen

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length(),i,st=0,ans=0;
        vector<int> cnt(3,0);
        for(i=0;i<n;i++)
        {
            cnt[s[i]-'a']++;
            while(cnt[0]>0 && cnt[1]>0 && cnt[2] >0)
            {
                ans+=n-i;
                cnt[s[st]-'a']--;
                st++;
            }
        }
        return ans;
    }
};
