https://leetcode.com/problems/sort-colors/
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
