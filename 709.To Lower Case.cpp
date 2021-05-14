Question Link : https://leetcode.com/problems/to-lower-case/

//created by js0805

class Solution {
public:
    string toLowerCase(string str) {
        for(int i =0;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] = str[i]-65+97;
            }
        }
        return str;
    }
};


//Alternate solution by Amreen

class Solution {
public:
    string toLowerCase(string str) {
        string ans="";
        for(char ch:str)
        {
            if(ch>=65 && ch<=90)
                ch+=32;
            ans+=ch;
        }
        return ans;
    }
};
