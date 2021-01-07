Question Link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

//created by js0805(brute force)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int t =0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                    t++;
            }
            ans.push_back(t);
        }
        return ans;
    }
};

//created by js0805 (using additional container)

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int arr[101] = {0};
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
            
        }
        int sum=0;
        for(int i=0;i<101;i++)
        {
            if(arr[i]!=0)
            {
                int v = arr[i];
                arr[i] = sum;
                sum+=v;
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int j = arr[nums[i]];
            ans.push_back(j);
        }
        return ans;
    }
};

//Time complexity: O(N)
//Space complexity: Θ(100)
