//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//created by js0805
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int f=-1;
        int l =-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid]==target)
            {
                f = mid;
                cout <<f;
                e = mid-1;
            }
            else if(nums[mid]>=target)
            {
                e = mid-1;
            }
            else if(nums[mid]<=target)
            {
                s = mid+1;
            }
        }
        s = 0;
        e = n-1;
         while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid]==target)
            {
                l = mid;
                s = mid+1;
            }
            else if(nums[mid]>=target)
            {
                e = mid-1;
            }
            else if(nums[mid]<=target)
            {
                s = mid+1;
            }
        }
        vector<int>ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;
        
    }
};
