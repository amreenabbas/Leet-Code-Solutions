Question Link : https://leetcode.com/problems/reformat-date/

//Solution by Amreen

class Solution {
public:
    string reformatDate(string date) {
        date+=" ";
        int i,n=date.length();
        string w="",ans;
        vector<string>d;
        for(i=0;i<n;i++)
        {
            if(date[i]!=' ')
                w+=date[i];
            else
            {
                d.push_back(w);
                w="";
            }   
        }
        string dt,m,y;
        dt=d[0];
        dt.pop_back();
        dt.pop_back();
        if(dt.length()==1)
            dt='0'+dt;
        unordered_map<string,string>mon;
        mon.insert({"Jan","01"});
        mon.insert({"Feb","02"});
        mon.insert({"Mar","03"});
        mon.insert({"Apr","04"});
        mon.insert({"May","05"});
        mon.insert({"Jun","06"});
        mon.insert({"Jul","07"});
        mon.insert({"Aug","08"});
        mon.insert({"Sep","09"});
        mon.insert({"Oct","10"});
        mon.insert({"Nov","11"});
        mon.insert({"Dec","12"});
        m=mon[d[1]];
        y=d[2];
        ans=y+"-"+m+"-"+dt;
        return ans;
    }
};
