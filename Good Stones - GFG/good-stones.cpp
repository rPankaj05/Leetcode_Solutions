//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
   
     vector<int> vis;
     
   int solve(int n,vector<int> &arr, int i){
      
       if(i<0 or i>=n) return 1; // return 1 for good stone
       
       if(vis[i]!=-1) return vis[i]; // already visited then return its status good or bad 
  
       vis[i]=0; // for vis and bad stone
       vis[i]=solve(n,arr,i+arr[i]); // if funtion return 1 then it will change othwerwise 0
       
       return vis[i];
   }

    int goodStones(int n,vector<int> &arr){
        
        int ans;
        
        vis=vector<int> (n,-1);
        
        for(int i=0;i<n;i++){
            if(vis[i]==-1) solve(n,arr,i);
        }
        
        for(int i=0;i<n;i++){
            if(vis[i]==1) ans++;
        }
        
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends