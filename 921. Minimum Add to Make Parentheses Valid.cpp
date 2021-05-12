Question Link : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

//Solution by Amreen

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int c=0;
        for(char ch:s)
        {
            if(ch == '(')
                st.push(ch);
            if(ch == ')')
            {
                if(!st.empty())
                    st.pop();
                else 
                    c++;
            }
        }
        return c+st.size();
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0,ans=0;
        for(char ch:s)
        {
            if(ch == '(')
                c++;    
            if(ch == ')')
            {
                if(c>0)
                    c--;
                else
                    ans++;
            }
        }
        return ans+abs(c);
    }
};
