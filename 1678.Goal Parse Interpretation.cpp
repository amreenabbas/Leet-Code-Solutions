// https://leetcode.com/problems/goal-parser-interpretation/

//created by js0805
class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size()-1;i++){
            if(command[i]=='G'){
                ans.push_back('G');
            }
            else if(command[i]=='(' && command[i+1]==')'){
                ans.push_back('o');
            }
            else if(command[i]=='(' && command[i+1]=='a'){
                ans.push_back('a');
                ans.push_back('l');
            }
        }
        if(command[command.size()-1]=='G'){
            ans.push_back('G');
        }
        return ans;
    }
};

//TODO : Work over to insert these changes in the same string 

