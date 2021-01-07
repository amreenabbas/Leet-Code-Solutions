Question link : https://leetcode.com/problems/two-sum/
Question : Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].



//Solution by Amreen
    
class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector <int> v;
        multimap<int,int> m;
        int i = 0;
        for(auto it = nums.begin();it!=nums.end();it++)
        {
            m.insert(make_pair((*it),i));i++;
        } 
        
        for(auto p:m )
        {
            int d = p.first;
            auto j = m.find(target-d);
            if((j->second != p.second)&&(j!=m.end()))
            {
                v.push_back(p.second);
                v.push_back(j->second);
                break;
            }
        }
        return v;
            
    }
};

Alternate solution : 
// Solution by js0805

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std :: vector<int> indices;
        unordered_map<int, int> mymap;
        for(int i = 0; i < nums.size(); i++){
            auto found = mymap.find(target - nums[i]);
            if(found == mymap.end()){
                
            }
            else{
                indices.push_back(i);
                indices.push_back(found->second);
            }
            mymap.insert({nums[i], i});
        }
        return indices;
    }
};
