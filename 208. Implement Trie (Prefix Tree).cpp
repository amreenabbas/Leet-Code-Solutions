Question Link : 

//Solution by Amreen

class Trie {
public:
    /** Initialize your data structure here. */
    struct node{
      bool terminal = false;
      node*child[26] = {NULL};
    };
    node* root;
    Trie() {
        root = new node;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        node* pt = root;
        for(char c:word)
        {
            int ind = c-'a';
            if(pt->child[ind] == NULL)
                pt->child[ind] = new node;
            pt = pt->child[ind];
        }
        pt->terminal = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        node*pt = root;
        for(char c:word)
        {
            int ind = c-'a';
            if(pt->child[ind] == NULL)
                return false;
            pt = pt->child[ind];
        }
        return pt->terminal;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        node*pt = root;
        for(char c:prefix)
        {
            int ind = c-'a';
            if(pt->child[ind] == NULL)
                return false;
            pt = pt->child[ind];
        }
        if(pt->terminal == true)
            return true;
        for(int i = 0;i<26;i++)
        {
            if(pt->child[i] != NULL)
                return true;
        }
        return false;
    }
};

