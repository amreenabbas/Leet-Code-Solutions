
Question Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/

//created by js0805
// brute force approach

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++)
        {
            if(letters [i] > target)
                return letters[i];
        }
        return letters[0];
    }
};

// optimized using upper bound

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int u = upper_bound(letters.begin(),letters.end(),target)-letters.begin();
        if(u==letters.size())
            u =0;
        return letters[u];
    }
};
