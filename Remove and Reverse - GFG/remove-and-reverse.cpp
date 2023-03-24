//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        vector<int> vec(26,0); 
        for(auto it:s){
            vec[it-'a']++;
          }
        int dir=1;
        int i=0, j=s.size()-1;
        while(i<=j){
            if(dir==1){
                if(vec[s[i]-'a']==1) i++;
                else{
                    vec[s[i]-'a']--;
                    s[i]='@';
                    i++;
                    dir=-1;
                }   
            }
            
            else{
                if(vec[s[j]-'a']==1) j--;
                else{
                    vec[s[j]-'a']--;
                    s[j]='@';
                    j--;
                    dir=1;
                }  
            }
        }
        
        string ans="";
        for(auto it:s){
            if(it!='@') ans.push_back(it); 
        }
        if(dir==-1) reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends