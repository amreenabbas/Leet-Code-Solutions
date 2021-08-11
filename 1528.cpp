//created by js0805
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    string sol(s.length(),' ');
      for(int i=0;i<indices.size();i++){
          sol[indices[i]] = s[i];
      }
        return sol;
    }
};

//try using O(N) & O(1) by swapping indexes for both together