Question Link : https://leetcode.com/problems/palindrome-partitioning-ii/

//Solution by AA

class Solution {
public:
    int minCut(string s) {
    int len = s.length();
    vector<int> pal(len,0);
    vector<int> cuts(len+1,len);
    int i,j;
        cuts[0] = -1;
    for(i=0;i<len;i++)
    {
        cuts[i+1] = min(cuts[i+1],cuts[i]+1);
        for(j=0;j<i;j++)
        {
            if((s[i] == s[j])&&(i-j < 3 || pal[j+1] == i-j-2))
            {
                pal[j] = i-j;
                cuts[i+1] = min(cuts[i+1],cuts[j]+1);
            }    
        }
    }
        return cuts[len];
    }
};
