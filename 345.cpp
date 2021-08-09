//created by js0805
class Solution {
public:
    string reverseVowels(string s) {
        vector<char>ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or
              s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                ans.push_back(s[i]);
            }
        }
        string sol;
        int j = ans.size()-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or
              s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                sol.push_back(ans[j--]);
            }
            else{
                sol.push_back(s[i]);
            }
        }
        return sol;
    }
};