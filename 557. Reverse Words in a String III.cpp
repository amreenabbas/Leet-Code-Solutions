Question Link : https://leetcode.com/problems/reverse-words-in-a-string-iii/

//Solution by Amreen

class Solution {
public:
    string reverseWords(string s) {
        string w="",ans="";
        s+=" ";
        for(char c:s)
        {
            if(c==' ')
            {
               reverse(w.begin(),w.end());
                ans+=w+" ";
                w="";
            }
            else
                w+=c;
        }
        ans.pop_back();
        return ans;
    }
};
