//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:

     int search(char x[], char c,int n){
         for(int i=0;i<n;i++){
             if(x[i]==c) return i;
         }
         return -1;
     }
      

      string maxSum(string w,char x[], int b[],int n){
         string ans="";
         string tmp="";
        
         int mxsum=INT_MIN;
         int cur_sum=0;
        
         for(int i=0;i<w.size();i++){
             
            int idx=search(x,w[i],n);
            
            if(idx!=-1) cur_sum+=b[idx];
            else cur_sum+=w[i];
            
            tmp+=w[i];
            
            if(mxsum<cur_sum) {
                mxsum=cur_sum;
                ans=tmp;
            } 
            
            if(cur_sum<0){
                cur_sum=0;
                tmp="";
            }
            
         }
         
         return ans;
         
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends