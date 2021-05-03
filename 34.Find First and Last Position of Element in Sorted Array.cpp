Question Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

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

//Solution by Amreen

class Solution {
public:
    int binsearchfirst(int l, int r, vector<int>& nums, int t)
    {
        int pos = -1;
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if(nums[m] == t &&(m==0 || nums[m-1] !=t))
                return m;
            else if (nums[m]==t)
                r = m-1;
            if(nums[m]>t)
                r = m-1;
            if(nums[m]<t)
                l = m+1;
        }
        return pos;
    }
    int binsearchlast(int l, int r, vector<int>& nums, int t)
    {
        int pos = -1,n=nums.size();
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if(nums[m] == t &&(m==n-1 || nums[m+1] !=t))
                return m;
            else if (nums[m]==t)
                l = m+1;
            if(nums[m]>t)
                r = m-1;
            if(nums[m]<t)
                l = m+1;
        }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int i,n=nums.size();
        vector<int>ans;
        if(n==0)
        {
            ans = {-1,-1};
            return  ans;
        }   
        int b = binsearchfirst(0,n-1,nums,target);
        ans.push_back(b);
        b = binsearchlast(0,n-1,nums,target);
        ans.push_back(b);
        return ans;
    }
};
