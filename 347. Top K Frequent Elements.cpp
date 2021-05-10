Question Link : https://leetcode.com/problems/top-k-frequent-elements/

//Solution by Amreen

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int e:nums)
            m[e]++;
        priority_queue<pair<int,int>>p;
        for(auto it:m)
        p.push({it.second,it.first});
        vector<int>ans;
        pair<int,int>t;
        for(int i=0;i<k;i++)
        {
            t = p.top();
            p.pop();
            ans.push_back(t.second);   
        }
        return ans;
    }
};
