Question Link : https://leetcode.com/problems/number-of-different-integers-in-a-string/

//Solution by Amreen

class Solution {
public:
    int numDifferentIntegers(string word) {
        int i,n=word.length();
        set<string>no;
        for(i=0;i<n;i++)
        {
            if(word[i]>='0' && word[i]<='9')
            {
                int st = i;
                while(i<n && word[i]>='0' && word[i]<='9')
                    i++;
                string num = word.substr(st,i-st);
                int j=0,end=0,l=num.length();
                while(num[end] == '0')
                    end++;
                string w = num.substr(end,l-end);
                no.insert(w);
            } 
        }
        return no.size();
    }
};
