Question link : https://leetcode.com/problems/text-justification/

//Solution by Amreen
    
class Solution {
public:
    string leftjustify(vector<string>& words, int diff, int i, int j)
    {
        int spaces = j-i-1;
        string result = words[i];
       
        for(int k = i+1;k<j;k++)
            result += " "+words[k];
            
        int spacesneeded = diff-spaces;
        for(int k = spacesneeded;k>0;k--)
            result += " ";
        return result;
    }
    string middlejustify(vector<string>& words, int diff, int i, int j)
    {
        int spaces = j-i-1;
        string result = words[i];
        int addspaces = diff/spaces;
        int remainingspaces = diff%spaces;
        for(int k = i+1;k<j;k++)
        {
            int spacestoadd = addspaces+(remainingspaces-- > 0 ? 1 : 0);
            for(int l = spacestoadd;l>0;l--)
                result += " ";
            result += words[k];
        }
        return result;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int i = 0, j, n = words.size();
        vector<string> ans;
        
        while(i<n)
        {
            j = i+1;
            string result;
            int linewidth = words[i].length();
            while(j<n && (linewidth+words[j].length()+j-i-1) < maxWidth)
            {
                linewidth += words[j].length();
                j++;
            }
            int noofwords = j-i;
            int diff = maxWidth - linewidth;
            if(noofwords == 1 || j>= n)
                result = leftjustify(words, diff, i, j);
            else
                result = middlejustify(words, diff, i, j);
            ans.push_back(result);
            i = j;
            
        }
        return ans;
    }
};    
