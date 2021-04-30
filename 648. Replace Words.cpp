Question Link : https://leetcode.com/problems/replace-words/

//Solution by Amreen

class Solution {
public:
    struct node{
        node*child[26] = {NULL};
        bool terminal = false;
    };
    void maketrie(vector<string>& dictionary,node* root)
    {
        node* pt = root;
        for(string word:dictionary)
        {
            pt = root;
            for(char c:word)
            {
                int ind = c-'a';
                if(pt->child[ind] == NULL)
                pt->child[ind] = new node;
                pt = pt->child[ind];
            }
            pt->terminal = true;
        }
    }
    string findroot(node* root, string word)
    {
        node* pt = root;
        string ans = "";
        for(char c: word)
        {
            int ind = c-'a';
            if(pt->terminal == true)
                return ans;
            if(pt->child[ind] == NULL)
                return "";
            pt = pt->child[ind];
            ans+=c;
        }
        if(pt->terminal == true)
            return ans;
        return "";
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        node* root = new node;
        maketrie(dictionary,root);
        sentence+=" ";
        int i,n=sentence.length();
        string word="",output="";
        for(i=0;i<n;i++)
        {
            if(sentence[i] == ' ')
            {
                string r = findroot(root,word);
                
                if(r!="")
                    output+=r;
                else
                    output+=word;
                output+=" ";
                word="";
            }
            else
                word+=sentence[i];
        }
        output.pop_back();
        return output;
    }
};
