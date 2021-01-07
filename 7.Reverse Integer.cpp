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
