Question Link : https://leetcode.com/problems/count-nice-pairs-in-an-array/

//Solution by Amreen

class Solution {
public:
    int reverse(int n)
    {
        int rev=0;
        while(n>0)
        {
            rev=rev*10+(n%10);
            n/=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>m;
        long c=0;
        for(int i=0;i<nums.size();i++)
        {
            int r = reverse(nums[i]);
            nums[i]-=r;
            if(m.find(nums[i])!=m.end())
                c+=m[nums[i]];
            m[nums[i]]++;
        }
        int ans = c%(long)(pow(10,9)+7);
        return ans;
    }
};
