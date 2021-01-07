Question Link : https://leetcode.com/problems/3sum-closest/

//created by js0805

class Solution {
public:
    int threeSumClosest(vector<int> nums, int target) {
          sort(nums.begin(), nums.end());
        int outSum = 0;
        int dist = INT_MAX;
        for (int i =0; i< nums.size()-2; i++) {
            //for (int j =0; j< nums.size)
            int low = i+1;
            int high = nums.size()-1;
            
            while(low <high) {
                int sum = nums[i] + nums[low] +nums[high] ;
                if (sum == target)
                    return target;
                
                if (target > sum) {
                    int diff = (target) - sum;
                    if (diff < dist) {
                        dist = diff;
                        outSum = sum;
                    }
                    low++;
                } else {
                    int diff = sum - (target);
                    if (diff < dist) {
                        dist = diff;
                        outSum = sum;
                    }
                    high--;
                }
            }
        }
        
        return outSum;
    }
};
