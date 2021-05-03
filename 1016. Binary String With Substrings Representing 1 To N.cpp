Question Link : https://leetcode.com/problems/binary-string-with-substrings-representing-1-to-n/

//Solution by Amreen

class Solution {
    
public:
    string binconversion(long n)
    {
        string s="";
        while(n>0)
        {
            s =((n&1)?"1":"0")+s;
            n = n>>1;
        }
        return s;
    }
    bool queryString(string S, int N) {
        long l = S.length();
        long minsize = (log(N)/log(2))*(N-N/2);
        long i;
        if(l<minsize)
            return false;
        for(i=N;i>N/2;i--)
        {
            string str = binconversion(i);
            cout<<str<<"."<<i<<" ";
            if(S.find(str) == std::string::npos)
                return false;
        }
        return true;
    }
};
