Question Link : https://leetcode.com/problems/contains-duplicate/

//Solution by Amreen

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() ==0)
            return false;
        sort(nums.begin(),nums.end());
        for(auto it = nums.begin();it+1!=nums.end();it++)
        {
            if((*it) - (*(it+1)) == 0)
                return true;
        }
    return false;
    }
    
};

// Solution by js0805

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t =0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
                t++;
        }
        if(t>=1)
            return true;
            else
                return false;
        
    }
};
