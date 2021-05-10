Question Link : https://leetcode.com/problems/reverse-integer/

//created by js0805

class Solution {
public:
   int reverse(int x) {
    long result = 0;
    while(x != 0)
    {
        result = result*10 + x % 10;
        x /= 10;
    }
    return (result > INT_MAX || result < INT_MIN)? 0 : result; // Here we are checking for int overflow.
}
};

//Alternate solution by Amreen

class Solution {
public:
    int reverse(int x) {
        long rev=0,f=0;
        if(x<0 && abs(x)>=INT_MAX)
            return 0;
        if(x<0)
        {
            f=1;
            x=-x;
        }   
        while(x>0)
        {
            if(rev*10>=INT_MAX)
                return 0;
            rev = rev*10+(x%10);
            x/=10;
        }
        return f?-(int)rev:(int)rev;
    }
};
