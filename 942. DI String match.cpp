Question Link : https://leetcode.com/problems/di-string-match/

//Solution by Amreen

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ans;
        int i,n=S.length();
        int l = 0, h = n; 
        
        for(i=0;i<n;i++)
        {
            char c = S[i];
            if(c=='I')
            {
                ans.push_back(l);
                l++;
                
            }
            else
            {
                ans.push_back(h);
                h--;
                
            }
        }
        
        ans.push_back(l);
        return ans;
    }
};
