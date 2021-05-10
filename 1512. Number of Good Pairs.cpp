Question Link : https://leetcode.com/problems/number-of-good-pairs/

//Solution by Amreen

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums)
            m[x]++;
        int ans=0;
        for(auto x:m)
        {
            ans+=(x.second)*(x.second-1)/2;
        }
        return ans;
    }
};
