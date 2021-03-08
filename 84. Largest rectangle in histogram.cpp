Question Link : https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/

//Solution by Amreen

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int i,n=heights.size(),area = 0;
        for(i=0;i<n;i++)
        {
            if(s.empty() || heights[s.top()] <= heights[i])
                s.push(i);
            else
            {
                while(!s.empty() && heights[s.top()]>=heights[i])
                {
                    int x = s.top();
                    s.pop();
                    int y = i;
                    if(!s.empty())
                        y=i-1-s.top();
                   
                    area = max(area,heights[x]*y);
                }
                s.push(i);
            }
        }
        while(!s.empty())
        {
            int y = i;
            int x = s.top();
            s.pop();
            
            if(!s.empty())
                y=i-1-s.top();
            area = max(area, heights[x]*y);
        }
        return area;
    }
};
