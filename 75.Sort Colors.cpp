Question Link : https://leetcode.com/problems/sort-colors/

//created by js0805

class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        int z = 0,o =0;
        for(auto i:nums){
            if(i==0) z++;
            else if(i==1) o++;
        }
        for(int i =0;i<z;i++){
            nums[i] = 0;
        }
        for(int i =z;i<o+z;i++){
            nums[i] = 1;
        }
        for(int i =o+z;i<nums.size();i++){
            nums[i] =2;
        }
    }
};

//Alternate solution by Amreen

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,n=nums.size(),c0=0,c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0)
                c0++;
            if(nums[i] == 1)
                c1++;
            if(nums[i] == 2)
                c2++;
        }
        for(i=0;i<n;i++)
        {
            if(c0)
            {
                nums[i] = 0;
                c0--;
            }
            else if(c1)
            {
                nums[i] = 1;
                c1--;
            }
            else if(c2)
            {
                nums[i] = 2;
                c2--;
            }
        }
    }
};
