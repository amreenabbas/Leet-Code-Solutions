Question Link : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

//Solution by Amreen

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="",w2="";
        for(string w:word1)
        {
            w1+=w;
        }
        for(string w:word2)
        {
            w2+=w;
        }
        return w1.compare(w2)==0;
    }
};
