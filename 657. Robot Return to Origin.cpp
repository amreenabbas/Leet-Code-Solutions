Question Link : https://leetcode.com/problems/robot-return-to-origin/

//Solution by Amreen

class Solution {
public:
    bool judgeCircle(string moves) {
        int lr=0,ud=0;
        for(char c:moves)
        {
            switch(c)
            {
                case 'L':lr++;
                    break;
                case 'R':lr--;
                    break;
                case 'U':ud++;
                    break;
                case 'D':ud--;
                    break;
            }
        }
        if(lr==0 && ud==0)
            return true;
        return false;
    }
};
