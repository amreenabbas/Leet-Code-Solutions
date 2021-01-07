Question Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

//created by js0805

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int t = *max_element(candies.begin(),candies.end());
        vector<bool>ans;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=t)
            {
                ans.push_back(true);
                
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
