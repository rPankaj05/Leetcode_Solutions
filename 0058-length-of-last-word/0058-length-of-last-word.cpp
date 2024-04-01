class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        string ans="";
        while(n>=0){
            if(s[n]==' ') {
                if(ans.size()>0) break;              
               }
            else ans.push_back(s[n]);
            n--;
        }
        return ans.size();
    }
};