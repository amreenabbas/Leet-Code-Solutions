Question Link : https://leetcode.com/problems/valid-perfect-square/

//created by Amreen

class Solution {
public:
    bool isPerfectSquare(int num) {
               bool a=false;
        long long i  = 1;
        
        while (num>0)
        {
            num = num -i;
            i = i+2;
            if(num==0)
            {
                a = true;
                break;
            }
             
        }
        
        return a;
        
    
    }
};
