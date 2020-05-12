//https://leetcode.com/problems/arranging-coins/
//created by js0805 
// O(N) solution
class Solution {
public:
    int arrangeCoins(int n) {
        int i =1;
        int t =0;
        while(n>0)
        {
            n-=i;
            i++;
            t++;
            
        }
        if(n==0)
        {
            return t;
        }
      
        return t-1;
    }
};
