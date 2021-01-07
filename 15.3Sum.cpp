Question Link : https://leetcode.com/problems/3sum/

//created by js0805

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        
        if (nums.size() < 3) {
            return ret;
        }
        
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        int low;
        int high;
        int temp;
        
        int current;
        int lownum;
        int highnum;
        
        for (int i = 0; i < size - 2; i ++) {
            current = nums[i];
            if (current > 0) {
                break;
            } else {
                if (i == 0 || current != nums[i - 1]) {
                    low = i + 1;
                    high = size - 1;
                    
                    while(low < high) {
                        lownum = nums[low];
                        highnum = nums[high];
                        temp = current + lownum + highnum;
                        if (temp == 0) {
                            ret.push_back({current, lownum, highnum});
                            while(nums[low] == lownum && low < high) {
                                low++;
                            }
                            while(nums[high] == highnum && low < high) {
                                high--;
                            }
                        } else if (temp > 0) {
                            high--;
                        } else {
                            low++;
                        }
                    }
                }
            }
        }
        
        return ret;
    }
};
