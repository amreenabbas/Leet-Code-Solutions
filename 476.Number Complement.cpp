Question Link : https://leetcode.com/problems/number-complement/

//created by Amreen

class Solution {
public:
    int findComplement(int num) {
        double f = log(num)/log(2);
        double max = pow(2,(int)f+1) -1;
        return (int)max-num;
    }
};
