Question Link : https://leetcode.com/problems/merge-intervals/

//created by js0805

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         if(intervals.size()<=1) return intervals;
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back({intervals[0][0],intervals[0][1]});
        int a =0;
        for(int i =1;i<intervals.size();i++)
        {
            if(ans[a][1]<intervals[i][0])
            {
                a++;
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
            else if(ans[a][1] >= intervals[i][0])
            {
                ans[a][1] = max(ans[a][1],intervals[i][1]);
            }
        }
        return ans;
        
    }
};

