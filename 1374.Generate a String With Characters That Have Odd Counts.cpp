Question Link : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

//created by js0805

class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n==1)
        {
            ans.push_back('a');
            return ans;
        }
        if(n%2==0)
        {
            for(int i =0;i<n-1;i++)
            {
                ans.push_back('a');
            }
            ans.push_back('b');
        }
        else{
            int t = n-1;
            for(int i =0;i<t-1;i++)
            {
                ans.push_back('a');
            }
            ans.push_back('b');
            ans.push_back('c');
            
        }
        return ans;
    }
};
