class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str,str2;
        for(auto x:word1)
        {
            str+=x;
        }
        for(auto x:word2)
        {
            str2+=x;
        }
        if(str==str2)
            return true;
        return false;
      
        
    }
};
