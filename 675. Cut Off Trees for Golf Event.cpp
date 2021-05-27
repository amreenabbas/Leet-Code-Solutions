Question Link : https://leetcode.com/problems/cut-off-trees-for-golf-event/

//Solution by Amreen

class Solution {
public:
    struct tree{
        int x;
        int y;
        int h;
        tree(int x,int y, int h):x(x),y(y),h(h){}
    };
    struct comp{
        bool operator()(const tree&t1, const tree&t2)
        {
            return t1.h>t2.h;
        }
    };
    int xdir[4]={0,0,-1,1};
    int ydir[4]={-1,1,0,0};
    int cutOffTree(vector<vector<int>>& forest) {
     int i,j,n=forest.size(),m=forest[0].size();
        priority_queue<tree,vector<tree>,comp>pq;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(forest[i][j]>1)
                {
                    tree t(i,j,forest[i][j]);
                    pq.push(t);
                }
            }
        }
        tree t1(0,0,1);
        int ans=0;
        while(!pq.empty())
        {
            tree t2 = pq.top();
            pq.pop();
            int dist = bfs(t1,t2,forest);
            if(dist==-1)
                return -1;
            ans+=dist;
            t1 = t2;
        }
        return ans;
    }
    int bfs(tree t1, tree t2, vector<vector<int>>&forest)
    {
        int n=forest.size(),m=forest[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<tree>q;
        q.push(t1);
        vis[t1.x][t1.y]=true;
        int dis=0,x,y;
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                tree t=q.front();
                q.pop();
                if(t.x==t2.x && t.y==t2.y)
                {
                    forest[t.x][t.y] = 1;
                    return dis;
                }
                for(int i=0;i<4;i++)
                {
                    x=t.x+xdir[i];
                    y=t.y+ydir[i];
                    if(x<0||x>=n||y<0||y>=m)
                        continue;
                    if(forest[x][y]==0)
                        continue;
                    if(vis[x][y])
                        continue;
                    vis[x][y] = true;
                    tree p(x,y,forest[x][y]);
                    q.push(p);
                }
            }
            dis++;
        }
        return -1;
    }
};
