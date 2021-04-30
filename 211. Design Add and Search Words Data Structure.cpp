Question Link : https://leetcode.com/problems/design-add-and-search-words-data-structure/

 //Solution by Amreen
 
class WordDictionary {
public:
    struct trie{
      trie* child[26]={NULL};
        bool terminal = false;
    };
    trie* root;
    WordDictionary() {
        root = new trie;
    }
    
    void addWord(string word) {
        trie* p = root;
        for(char c:word)
        {
            if(p->child[c-'a'] == NULL)
                p->child[c-'a'] = new trie;
            p = p->child[c-'a'];
        }
        p->terminal = true;
    }
    
    bool search(string word) {
        return searchutil(root,word,0);
    }
    bool searchutil(trie* root, string word, int pos)
    {
        if(root == NULL)
            return false;
        if(pos == word.length())
            return root->terminal;
        if(word[pos] == '.')
        {
            for(int i = 0;i<26;i++)
            {
                if(searchutil(root->child[i],word,pos+1))
                    return true;
            }
        }
        else if(root->child[word[pos]-'a'] == NULL)
            return false;
        else
            return searchutil(root->child[word[pos]-'a'],word,pos+1);
        return false;
    }
};

//Alternate solution by Amreen

class WordDictionary {
public:
    
    unordered_map<int,vector<string>> map;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        int n = word.length();
        map[n].push_back(word);
    }
    
    bool search(string word) {
        int l = word.length();
        auto dict = map[l];
        for(string w:dict)
        {
            bool flag = true;
            int pos = 0;
            for(char c:w)
            {
                if(c!=word[pos] && word[pos] != '.')
                {
                    flag = false;
                    break;
                }    
                pos++;
            }
            if(flag)
                return flag;
        }
        return false;
    }
    
};

