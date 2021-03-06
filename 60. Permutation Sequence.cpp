Question link : https://leetcode.com/problems/permutation-sequence/

//Solution by Amreen

class Solution {
public:
    string getPermutation(int n, int k) {
        int part_fact = 1;
        int i;
        set<int>s;
        for(i=1;i<n;i++)
        {
            s.insert(i);
            part_fact*=i;
        }
        s.insert(n);
        k--;
        string ans="";
        auto itr = s.begin();
        while(true)
        {
            int index = k/part_fact;
            advance(itr,index);
            ans+=to_string(*itr);
            s.erase(*itr);
            if(s.empty())
                break;
            k %= part_fact;
            part_fact /= s.size();
            itr = s.begin();
        }
        return ans;
    }
};
