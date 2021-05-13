Question Link : https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/

//Solution by Amreen

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>dict;
        for(auto p:knowledge)
        {
            dict[p[0]] = p[1];
        }
        int i=0,n=s.length();
        string ans="",key="";
        bool f=false;
        while(i<n)
        {
            if(s[i] == '(')
            {
                f=true;
            }
            else if(f && s[i]!=')'&& s[i]!='(')
                key+=s[i];
            else if(f&& s[i] == ')')
            {
                if(dict.find(key)!=dict.end())
                    ans+=dict[key];
                else
                    ans+="?";
                key="";
                f=false;
            }
            else
                ans+=s[i];
            i++;
        }
        return ans;
    }
};
