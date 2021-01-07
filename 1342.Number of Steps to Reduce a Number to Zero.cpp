Question Link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

//created by js0805

class Solution {
public:
    int numberOfSteps (int num) {
         int t=0;
        while(num!=0)
        {
            if(num%2==0)
            {
                num=num/2;
                t++;
            }
            else
            {
                num-=1;
                t++;
            }
        }
        return t;
    }
};
