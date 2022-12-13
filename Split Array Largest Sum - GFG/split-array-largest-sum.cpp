//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    
    private: 
      
       int sumElements(int arr[],int n){
          int sum=0;
          for(int i=0;i<n;i++) sum+=arr[i];
          return sum;
        }
      
      bool isPossible(int arr[],int n,int mid,int k){
          int cnt=1;
          int sum=0;
          for(int i=0;i<n;i++){
              if(sum+arr[i]<=mid){
                  sum+=arr[i];
              }
             else {
                 cnt++;
                 if(cnt>k or arr[i]>mid) return false;
                 sum=arr[i];
             }
          }
          return true;
      }
    
  public:
    int splitArray(int arr[] ,int N, int K) {
        int start=1;
        int end=sumElements(arr,N);
        int ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(isPossible(arr,N,mid,K)) {
                ans=mid;
                end=mid-1;
            }
          else start=mid+1;
        }
       return ans; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends