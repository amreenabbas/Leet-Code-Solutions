Question Link : https://leetcode.com/problems/iterator-for-combination/

//Solution by AA

class CombinationIterator {
public:
    
    vector<string> comb;
    int top=0;
    void preprocess(string characters, int combinationLength, int start, string output)
    {
        if(characters.length()==0)
            return;
        if(output.length()==combinationLength)
        {
            comb.push_back(output);
            return;
        }
        for(int j = start;characters[j];j++)
            preprocess(characters,combinationLength,j+1,output+characters[j]);   
    }
    CombinationIterator(string characters, int combinationLength) {
        preprocess(characters,combinationLength,0,"");
    }
    
    string next() {
     return comb[top++];   
    }
    
    bool hasNext() {
        return (comb.size()>top);
    }
};

