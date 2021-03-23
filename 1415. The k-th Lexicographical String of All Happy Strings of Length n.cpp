Question Link : https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/

//Solution by Amreen

class Solution {
public:
    string getHappyString(int n, int k) {
        int t = 3*(int)pow(2,n-1);
        if(k>t)
            return "";
        int curr_size = t/3;
        char last_char = k>2*curr_size?'c':(k>curr_size?'b':'a');
        string s = "";
        s+=last_char;
        while(k>curr_size)
            k-=curr_size;
        --n;
        char next_char [3][2] = {{'b','c'},{'a','c'},{'a','b'}};
        while(n>0)
        {
            curr_size/=2;
            last_char = next_char[last_char-'a'][k>curr_size?1:0];
            s+=last_char;
            if(k>curr_size)
                k-=curr_size;
            --n;
        }
        return s;
    }
};
