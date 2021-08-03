//created by js0805
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int x = queries[i][0],y = queries[i][1],r = queries[i][2],count=0;
            for(int j = 0;j<points.size();j++){
                int a = points[j][0], b = points[j][1];
                float t1 = (x-a)*(x-a);
                float t2 = (y-b)*(y-b);
                t1 = t1+t2;
                t1 = sqrt(t1);
                //cout << t1 << " ";
                if(t1<=r){
                    count++;
                }
                
            }
            //cout << "\n";
            ans.push_back(count);
        }
        return ans;
    }
};
