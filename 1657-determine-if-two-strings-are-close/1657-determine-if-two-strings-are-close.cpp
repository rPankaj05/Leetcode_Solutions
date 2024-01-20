
class Solution {
 public:
    bool closeStrings(string s1, string s2) {
       
       if(s1.size()!=s2.size()) return false;
        
       vector<int> v1(26,0);
       vector<int> v2(26,0);
        
       for(auto it:s1){
           v1[it-'a']++;
       }
       for(auto it:s2){
           v2[it-'a']++;
       }
       
       for(int i=0;i<26;i++){
            if((v1[i] == 0 && v2[i] != 0) || (v1[i] != 0 && v2[i] == 0)) return false;
        }
       
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
       
    }
};