Question link : https://leetcode.com/problems/two-sum/

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
