Question Link : https://leetcode.com/problems/search-a-2d-matrix/submissions/

//Created by Amreen

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int n) {
        if ((a.size() == 0)||(a[0].size() == 0))
            return false;
	int sr = 0, sc = 0, ec = a[0].size()-1, er = a.size()-1;
	int r = sr, c = ec, f = 0;
	while(a[r][c] != n)
	{
		if(a[r][c] > n)
		{
			
			c--;	
			if(c == -1)
			{
				
				f = 1;
				break;
			}
			
		}
		if(a[r][c] < n)
		{
			
			r++;
			if(r == a.size())
			{

				f = 1;
				break;
			}
		}
	}
	
	if (f == 0)
	return true;
    return false;
    }
};
