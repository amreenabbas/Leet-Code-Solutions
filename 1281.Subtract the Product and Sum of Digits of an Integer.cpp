Question Link : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

//created by js0805
class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>a;
        int sum=0,p=1;
        while(n>0)
        {
            int t = n%10;
            sum+=t;
            p*=t;
            n= n/10;
        }
        int j = p-sum;
        return j;
    }
};
