class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string tmp="";
        string ans="";
        for(auto it:s){
            if(it==' '){
                reverse(tmp.begin(),tmp.end());
                ans+=tmp;
                ans.push_back(' ');
                tmp="";
            }
            else tmp.push_back(it);
        }
        ans.pop_back();
        return ans;
    }
};