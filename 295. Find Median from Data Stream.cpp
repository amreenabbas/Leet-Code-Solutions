Question Link : https://leetcode.com/problems/find-median-from-data-stream/

//Solution by Amreen

class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> pmax;
    priority_queue<int,vector<int>,greater<int>> pmin;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if(pmax.empty() || pmax.top()>num)
            pmax.push(num);
        else
            pmin.push(num);
          if(pmax.size()>pmin.size()+1)
        {
            pmin.push(pmax.top());
            pmax.pop();
        }
        else
        if(pmin.size()>pmax.size()+1)
        {
            pmax.push(pmin.top());
            pmin.pop();
        }
    }
    
    double findMedian() {
        if(pmax.size() == pmin.size())
        {
            double mid=(pmax.top()+pmin.top())*(1.0)/2;
            return mid;
        }
        else
        if(pmax.size()>pmin.size())
        {
            return pmax.top();
        }
        else
        {
            return pmin.top();
        }
    }
};

