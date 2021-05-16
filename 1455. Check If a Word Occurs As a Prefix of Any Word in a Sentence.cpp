Question Link : https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

//Solution by Amreen

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i,l=sentence.length(),j=0,m=searchWord.length(),c=1;
        for(i=0;i<l;i++)
        {
            bool f=true;
            j=0;
            while(i<l && sentence[i]!=' ')
            {
                if(j<m)
                {
                    if(searchWord[j] != sentence[i])
                        f=false;
                    else
                        j++;
                }
                i++;
            }
            if(f&&j==m)
                return c;
            c++;   
        }
        return -1;
    }
};
