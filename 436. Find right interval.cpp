Question Link : https://leetcode.com/problems/find-right-interval/

//Solution by Amreen

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>ans;
        if(intervals.size()<=1)
        {
            ans.push_back(-1);
            return ans;
        }   
        int i,n=intervals.size();
        map<int,int>rend;
        for(i=0;i<n;i++)
        {
         rend.insert({intervals[i][0],i});   
        }
        for(i=0;i<n;i++)
        {
            int en = intervals[i][1];
            auto it = rend.lower_bound(en);
            if(it==rend.end())
            ans.push_back(-1);
            else
                ans.push_back(it->second);
        }
        return ans;
    }
};
