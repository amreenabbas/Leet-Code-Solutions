Question Link : https://leetcode.com/problems/missing-number/

//created by js0805

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int t=0;
        for(auto i :nums)
        {
            if(i==0)
                t++;
            sum+=i;
        }
        if(t==0)
            return 0;
        else
        {
            return (nums.size()*(nums.size()+1)/2)-sum;
        }
        
    }
};
