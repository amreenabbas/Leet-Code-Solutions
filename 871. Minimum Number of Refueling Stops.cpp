Question Link : https://leetcode.com/problems/minimum-number-of-refueling-stops/

//Solution by Amreen

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int i,n=stations.size(),cnt=0;
        if(startFuel>=target)
            return 0;
        long currfuel = startFuel;
        priority_queue<int> cap;
        for(i=0;i<n;i++)
        {
            int st = stations[i][0];
            int c = stations[i][1];
            while(currfuel<st)
            {
                if(cap.empty())
                    return -1;
                int ca = cap.top();
                cap.pop();
                currfuel+=ca;
                cnt++;
            }
            if(st<=currfuel)
                cap.push(c);
        }
        while(currfuel<target)
        {
            if(cap.empty())
                return -1;
            int ca = cap.top();
            cap.pop();
            currfuel+=ca;
            cnt++;
        }
        return cnt;
    }
};
