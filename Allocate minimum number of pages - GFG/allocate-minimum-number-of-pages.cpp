//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
  
       int sumElements(int A[],int n){
          int sum=0;
          for(int i=0;i<n;i++) sum+=A[i];
          return sum;
        }
    
     bool isPossible(int A[],int n,int mid,int m){
      int student=1;
      int sum=0;
      for(int i=0;i<n;i++){
          if(sum+A[i]<=mid){
              sum+=A[i];
          }
          else {
              student++;
              if(student>m || A[i]>mid) return false;
              sum=A[i];
          }
      }
       return true;
  }
      
      
    
    int findPages(int A[], int N, int M) 
    {   if(M>N) return -1;
         int ans=0;
        int start=A[0];
        int end=sumElements(A,N);
        int mid=0;
        while(start<=end){
            mid=(start+end)/2;
            if(isPossible(A,N,mid,M)){
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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends