Question Link : https://leetcode.com/problems/fibonacci-number/

//created by js0805

class Solution {
public:
    int fib(int N) {
        long long int t = (pow(2,N)*2.2360679775);
        long long int a = (pow(1+2.2360679775,N));
        long long int b = (pow(1-2.2360679775,N));
        return (a-b)/t;
    }
};
