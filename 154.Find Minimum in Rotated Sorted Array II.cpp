Question Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

// created by js0805

class Solution {
public:
    int findMin(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int t;
        for(auto i:s)
        {
            t = i;
            break;
        }
        return t;
    }
};
// This solution will be requiring a better optimization on time as it is already best optimized over space.(i.e. 100%)
//created by js0805
// 100% space optimized and 97.90% time optimized.
//Just think once why is it in tuff?

class Solution {
public:
    int findMin(vector<int>& nums) {
        int t = INT_MAX;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]<t)
            {
                t = nums[i];
            }
        }
        return t;
    }
};
