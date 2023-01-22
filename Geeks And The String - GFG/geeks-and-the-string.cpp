//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        
        stack <char> st;
        
        for(auto it:s){
            bool flag=true;
          while(!st.empty() and it==st.top()) {flag=false; st.pop(); }
          if (flag) st.push(it);
        }
        
        if(st.size()==0) return "-1";
        
        string ans="";
        
        while(!st.empty()) {ans.push_back(st.top()); st.pop();}
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends