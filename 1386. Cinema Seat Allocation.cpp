Question Link : https://leetcode.com/problems/cinema-seat-allocation/

//Solution by Amreen

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int i,r,l=reservedSeats.size();
        unordered_map<int,set<int>>resv;
        for(i=0;i<l;i++)
        {
            r = reservedSeats[i][0];
            resv[r].insert(reservedSeats[i][1]);
        }
        int s = resv.size();
        int maxno = 2*(n-s);
        for(auto it:resv)
        {
            set<int> t = it.second;
            auto it2 = t.find(2);
            auto it3 = t.find(3);
            auto it4 = t.find(4);
            auto it5 = t.find(5);
            auto it6 = t.find(6);
            auto it7 = t.find(7);
            auto it8 = t.find(8);
            auto it9 = t.find(9);
            if(it2==t.end() && it3==t.end() && it4==t.end() && it5==t.end() && it8==t.end() && it9==t.end() && it6==t.end() && it7==t.end())
                maxno+=2;
            else if(it2==t.end() && it3==t.end() && it4==t.end() && it5==t.end())
                maxno++;
            else if(it6==t.end() && it7==t.end() && it4==t.end() && it5==t.end())
                maxno++;
            else if(it6==t.end() && it7==t.end() && it8==t.end() && it9==t.end())
                maxno++;
        }
        return maxno;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int i,r,l=reservedSeats.size();
        unordered_map<int,vector<int>>resv;
        for(i=0;i<l;i++)
        {
            r = reservedSeats[i][0];
            resv[r].push_back(reservedSeats[i][1]);
        }
        int s = resv.size();
        int maxno = 2*(n-s);
        for(auto it:resv)
        {
            vector<int> t = it.second;
            sort(t.begin(),t.end());
            int i=0,size = t.size();
            bool one = true,two = true, three = true;
            while(i<size)
            {
                if(t[i]>1 && t[i] < 6)
                    one = false;
                if(t[i]>3 && t[i]<8)
                    two = false;
                if(t[i]>5 && t[i]<10)
                    three = false;
                i++;
            }
            maxno+=  one ? (three ? 2 : 1) : (two||three ? 1 : 0);
           
        }
        return maxno;
    }
};
