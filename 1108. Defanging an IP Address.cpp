Question Link : https://leetcode.com/problems/defanging-an-ip-address/

//Solution by Amreen

class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(char c:address)
        {
            if(c=='.')
                ans+="[.]";
            else
                ans+=c;
        }
        return ans;
    }
};
