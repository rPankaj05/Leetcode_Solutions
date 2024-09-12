bool isValidString(vector<int> &v,string word){
            for(auto ch:word){
                if(v[ch-'a']==0) return false;
            }
    return true;
}

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        vector<int> v(26,0);
        for(auto it:allowed){
            v[it-'a']=1;
        }
        for (auto word:words){
           if(isValidString(v,word)) ans++; 
        }
        return ans;
    }
};

