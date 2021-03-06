Question Link : https://leetcode.com/problems/container-with-most-water/

//Solution by Amreen

class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0,high=height.size()-1,max_a=0,ans;
        while(low<high)
        {
            ans = (high-low)*min(height[low],height[high]);
            max_a = max(max_a,ans);
            if(height[low]>height[high])
                high--;
            else 
                low++;
        }
        return max_a;
    }
};
