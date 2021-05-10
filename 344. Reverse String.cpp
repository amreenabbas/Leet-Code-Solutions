Question Link : https://leetcode.com/problems/reverse-string/

//Solution by Amreen

class Solution {
public:
    void reverseString(vector<char>& s) {
     int i,n=s.size();
     for(i=0;i<n/2;i++)
     {
         char t = s[i];
         s[i] = s[n-1-i];
         s[n-1-i] = t;
     }
    }
};
