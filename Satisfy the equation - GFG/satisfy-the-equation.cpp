//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int a[], int n) {
       map<pair<int,int>,int> mp;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               int sum=a[i]+a[j];
               mp[{i,j}]=sum;
           }
       }
       vector<int> ans;
       for(auto x:mp){
           for(auto y:mp){
               if(x.second==y.second and x.first.first!=y.first.first 
                and x.first.second!=y.first.second  and
                 x.first.first!=y.first.second and 
                  y.first.first!=x.first.second){
                     ans.push_back(x.first.first);
                     ans.push_back(x.first.second);
                     ans.push_back(y.first.first);
                     ans.push_back(y.first.second);
                     return ans;
                 }
           }
       }
       
       return {-1,-1,-1,-1};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends