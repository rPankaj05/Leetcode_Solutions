class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        int ans=0; 
        for(auto it:words){
            string tmp=it;
            reverse(tmp.begin(),tmp.end());   
            if(mp[tmp]>0) {
                ans+=4;
                mp[tmp]--;
            }
          else mp[it]++;
        }
      for(auto it:mp){
          if(it.first[0]==it.first[1] and it.second>0) return ans+2;
      }
        return ans;
    }
};