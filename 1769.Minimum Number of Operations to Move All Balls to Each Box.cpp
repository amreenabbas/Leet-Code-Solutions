//created by js0805class Solution {public:    vector<int> minOperations(string boxes) {        vector<int >ans;        int n= boxes.size();        for(int i=0;i<n;i++){            int temp = 0;            for(int j=0;j<n;j++){                if(i==j) continue;                else if(boxes[j]=='1'){                    temp+=abs(i-j);                }            }            ans.push_back(temp);            temp=0;        }        return ans;    }};//TODO : Find a optimised solution to the problem
