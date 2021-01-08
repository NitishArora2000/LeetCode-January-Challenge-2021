class Solution {
public:
    int max(int a,int b)
    {
        if(a>b)
            return a;
        else return b;
    }
    int lengthOfLongestSubstring(string s) {
        int a=0;
        int b=0;
        int maxi=0;
        unordered_set<char> ch;
        while(b<s.length())
        {
            if(ch.find(s[b])==ch.end()){
                ch.insert(s[b]);
                b++;
                maxi=max(maxi,ch.size());
            }
            else
            {
                ch.erase(s[a]);
                a++;
            }
        }
        return maxi;
        
    }
};
