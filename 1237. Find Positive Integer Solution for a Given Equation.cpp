Question Link : 

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
     vector<vector<int>>ans;
     int i,j,res;
        for(i=1;i<=1000;i++)
        {
            for(j=1;j<=1000;j++)
            {
                res = customfunction.f(i,j);
                if(res == z)
                {
                    vector<int> v;
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
     vector<vector<int>>ans;
     int i,low,high=1000,res,mid;
        for(i=1;i<=1000;i++)
        {
            low = 1;
            while(low<high)
            {
                mid = low+(high-low)/2;
                res = customfunction.f(i,mid);
                if(res<z)
                    low = mid+1;
                else if(res>z)
                    high = mid;
                else
                {
                    ans.push_back({i,mid});
                    high = mid;
                    break;
                }
            }       
        }       
        return ans;
    }
};
