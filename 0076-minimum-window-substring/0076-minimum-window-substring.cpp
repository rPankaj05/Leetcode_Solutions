class Solution {
public:
    string minWindow(string s, string t) {
        
        bool flag=false;
        
        unordered_map<char,int> mp;
        
        for(auto it:t){
           mp[it]++; 
        }
        
        int n=t.size();
        int cnt=0;
       
        unordered_map<char,int> mp1;
      
        if(mp[s[0]]) cnt++;
         
        mp1[s[0]]++;
       
 
        int i=0, j=1; int len=INT_MAX;
        
         int start=i;
         int end=j;
        
      s.push_back('*');
        int m=s.size();
        
        while(i<=j and j<m){
            
            if(cnt<n){
               if(mp1[s[j]]<mp[s[j]]) cnt++;
                mp1[s[j]]++;
                j++;
              }
         
             if(cnt==n) {  
                 flag=true;
                 if(j-i<len){
                     len=j-i;
                     start=i;
                     end=j;
                 }
                if(mp1[s[i]]<=mp[s[i]]) cnt--;
                mp1[s[i]]--;
                i++;
            }
        }
        
    if(flag==false) return "";
        
      string ans="";
        while(start<end){
            ans.push_back(s[start]);
            start++;
        }
        
        return ans;
    }
};