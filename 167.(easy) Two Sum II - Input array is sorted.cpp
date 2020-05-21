//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//created by js0805
//Discuss its time complexity
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n = numbers.size();
        int s=0;
        int e =n-1;
        while(s<e)
        {
            if(numbers[s]+numbers[e] == target)
            {
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
            else if(numbers[s] + numbers[e] >target)
            {
                e = e -1;
            }
            else 
            {
                 s  = s +1;
            }
            
            
        }
        return ans;
            
        
    }
};
