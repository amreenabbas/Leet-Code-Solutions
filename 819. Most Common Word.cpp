Question Link : https://leetcode.com/problems/most-common-word/

//Solution by Amreen

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);
        string w="";
        unordered_map<string,int>m;
        set<string>s;
        for(string w:banned)
            s.insert(w);
        paragraph+=" ";
        int i,n=paragraph.length();
        for(i=0;i<n;i++)
        {
            if(paragraph[i]>='a' && paragraph[i]<='z')
                w+=paragraph[i];
            else
            {
                if(s.count(w)==0&&w!="")
                m[w]++;
                w="";
            }
            
        }
        string ans;
        int maxf=0;
        for(auto it:m)
        {
            if(it.second>maxf)
            {
                maxf=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};
