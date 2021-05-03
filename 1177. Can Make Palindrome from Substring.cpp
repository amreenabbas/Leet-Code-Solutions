Question Link : https://leetcode.com/problems/can-make-palindrome-from-substring/

//Solution by Amreen

class Solution {
public:
   
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int i,j,n=queries.size(),cnt,m=s.length();
        int freq[m];
        freq[0] = 1<<(s[0]-'a');
        for(i=1;i<m;i++)
            freq[i] = freq[i-1]^(1<<(s[i]-'a'));
        vector<bool>ans;
        for(i=0;i<n;i++)
        {
            int l = queries[i][0];
            int r = queries[i][1];
            int k = queries[i][2];
            if(l == 0)
                cnt = __builtin_popcount(freq[r]);
            else
                cnt = __builtin_popcount(freq[l-1]^freq[r]);

            if((cnt/2)<=k)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
