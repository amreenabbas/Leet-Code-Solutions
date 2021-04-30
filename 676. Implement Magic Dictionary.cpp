Question Link : https://leetcode.com/problems/implement-magic-dictionary/

//Solution by Amreen

class MagicDictionary {
public:
    
    unordered_map<int,vector<string>>map;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        for(string word:dictionary)
        {
            int l = word.length();
            map[l].push_back(word);
        }
    }
    
    bool search(string searchWord) {
        int l = searchWord.length();
        auto dict = map[l];
        for(string word:dict)
        {
            int f = 1,pos = 0;
            for(char c:word)
            {
                if(searchWord[pos] != c)
                    f--;
                if(f<0)
                    break;
                pos++;
            }
            if(!f)
                return true;
        }
        return false;
        
    }
};

