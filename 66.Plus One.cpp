Question Link : https://leetcode.com/problems/plus-one/

//created by js0805

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--)
        {
            if(digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }
         digits.emplace(digits.begin(),1); //insert 1 in the beginning incase of all 9's
         return digits;
    }
};
