Question Link : https://leetcode.com/problems/data-stream-as-disjoint-intervals/

//Solution by Amreen

class SummaryRanges {
public:
    /** Initialize your data structure here. */
    map<int,int> interval;
    SummaryRanges() {
        
    }
    
    void addNum(int val) {
       
        auto it = interval.insert({val,val}).first;
        if(it!=interval.begin())
        {
            auto pr = prev(it);
            if((pr->second>=val &&pr->first<=val)|| pr->second==val-1)
            {
                pr->second = max(pr->second,val);
                interval.erase(it);
                it = pr;
            }    
        }
        if(next(it)!=interval.end())
        {
            auto nx = next(it);
            if((nx->first >= it->first && nx->first <= it->second) || (nx->first == it->second + 1))
            {
                it->second = max(it->second,nx->second);
                interval.erase(nx);
            }
        }
        
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>>res;
        for(auto it:interval)
            res.push_back({it.first,it.second});
        return res;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(val);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */
