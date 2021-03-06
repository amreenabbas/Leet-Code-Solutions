Question Link : https://leetcode.com/problems/trapping-rain-water/

//Solution by Amreen

class Solution {
public:
    int trap(vector<int>& height) {
        int start=0,end=height.size()-1,res=0,left_max=0,right_max=0;
        while(start<=end)
        {
            if(height[start]<height[end])
            {
                if(left_max<height[start])
                    left_max = height[start];
                else
                    res+=left_max-height[start];
                start++;
            }
            else
            {
                if(right_max<height[end])
                    right_max = height[end];
                else
                    res+= right_max-height[end];
                end--;
            }
        }
        return res;
    }
};
