Question Link : https://leetcode.com/problems/determine-if-string-halves-are-alike/

//Solution by Amreen

class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int n = s.length();
        int i,j,v1=0,v2=0;
        string v = "aeiou";
        for(i=0;i<n;i++)
        {
            size_t f = v.find(s[i]);
            if(i<n/2 && f!=string::npos)
                v1++;
            if(i>=n/2 && f!=string::npos)
                v2++;
        }
        if(v1==v2)
            return true;
        return false;
    }
};
