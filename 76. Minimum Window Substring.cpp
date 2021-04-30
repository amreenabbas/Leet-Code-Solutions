Question Link : https://leetcode.com/problems/minimum-window-substring/

//Solution by Amreen

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> sen,pat;
        int i,l,ri,n=s.length(),m=t.length(),minl=-1,st=0;
        if(n<m||n==0||m==0)
            return "";
        
        for(i=0;i<m;i++)
        {
            pat[t[i]]++;
        }   
        int uniq = pat.size();
        l = 0;
        ri = 0;
        int form = 0;
        while( ri < n )
        {
            char curr = s[ri];
            sen[curr]++;
           
            if(pat.find(curr) != pat.end() && pat[curr] == sen[curr])
                form++;
            while(l<=ri && form == uniq)
            {
                int currl = ri-l+1;
                char last = s[l];
                if(minl == -1 || currl<minl)
                {
                    minl = currl;
                    st = l;
                }
                sen[last]--;
                if(pat.find(last)!=pat.end() && sen[last]<pat[last])
                    form--;
                l++;
            }
            ri++;
        }
        if(minl == -1)
            return "";
        return s.substr(st,minl);
    }
};
