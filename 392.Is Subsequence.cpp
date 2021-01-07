Question Link: https://leetcode.com/problems/is-subsequence/

//created by js0805

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length();
        int q = s.length();
        int j =0;
        for(int i =0;i<n;i++)
        {
            if(t[i] == s[j])
            {
                j++;
                cout << i <<" ";
            }
        }
        if(j==q)
        {
            return true;
        }
        return false;
    }
};
