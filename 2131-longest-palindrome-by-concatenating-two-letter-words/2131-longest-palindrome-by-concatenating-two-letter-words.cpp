class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        map<char,int> mp1;
        int ans=0; 
        for(auto it:words){
            if(it[0]==it[1]) { 
                mp1[it[0]]++;
                continue;
            }
            string tmp="";
            tmp.push_back(it[1]);
            tmp.push_back(it[0]);
            
            if(mp[tmp]>0) {
                ans+=4;
                mp[tmp]--;
            }
          else mp[it]++;
        }
         int mxodd=0;
        for(auto it:mp1){
            if(it.second%2){
            mxodd=max(mxodd,it.second);
            ans+=(it.second-1)*2;
            }
          else ans+=it.second*2;
        }
        if(mxodd!=0) ans+=2;
        return ans;
    }
};