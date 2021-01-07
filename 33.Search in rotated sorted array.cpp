Question Link : https://leetcode.com/problems/search-in-rotated-sorted-array/

//created by Amreen

class Solution {
public:
    int search(vector<int>& nums, int target) {
        map<int,int> m;
        int i,n=nums.size();
        for(i=0;i<n;i++)
        {
            m.insert(make_pair(nums[i],i));
        }
        if(m.count(target))
            return m[target];
        else 
            return -1;
    }
};


// created by js0805

class Solution {
public:
    int search(vector<int>& nums, int target) {
            
        for(int i =0;i<nums.size();i++)
            {
                if(nums[i] == target )
                 return i;   
            }
        return -1;
    }
};
