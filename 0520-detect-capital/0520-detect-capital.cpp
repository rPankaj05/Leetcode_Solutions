class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int cap=0;
        int sm=0;
        for(auto it:word){
            if(it>='A' and it<='Z') cap++;
            else sm++;
        }
        
        if(cap==n or cap==0) return true;
        if(cap>1) return false;
        if(word[0]>='A' and word[0]<='Z') return true;
        else return false;
    }
};