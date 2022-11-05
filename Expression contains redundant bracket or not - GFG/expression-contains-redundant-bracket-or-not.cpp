//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> st;
        for(auto it:s){
            if(it=='(' || it=='+' || it=='-' || it=='*' || it=='/') 
                   st.push(it);
            else if(it==')'){
                bool flag=true;
                while(st.top()!='('){
                  char ch=st.top();
                  if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                     flag=false; 
                   } 
                  st.pop();
                 }
                if(flag) return 1;
                st.pop();
                }
            }
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends