Question Link : https://leetcode.com/problems/container-with-most-water/
   
//created by js0805
class Solution {
public:
   
    int maxArea(vector<int>& height) {
        int l =0,h = height.size()-1;
        int sum =  0;
        while(l<h)
        {
            int q = min(height[l],height[h]);
            sum = max(sum,(h-l)*q);
            while(height[l]<=q && l<h)l++;
            while(height[h]<=q && l<h)h--;
        }
        return sum;
    }
};

//created by js0805
class Solution {
public:
   
    int maxArea(vector<int>& height) {
        int l =0,h = height.size()-1;
        int sum =  0;
        while(l<h)
        {
           int w = h-l;
            if(height[l]<=height[h])
            {
                sum = max(sum,height[l]*w);
                l++;
            }
            else
            {
                sum = max(sum,height[h]*w);
                h--;
            }
           
        }
        return sum;
    }
};
