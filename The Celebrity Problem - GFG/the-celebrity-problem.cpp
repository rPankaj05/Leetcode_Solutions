//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

/*
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {   int ans=-1; bool flag=true;
        for(int i=0;i<n;i++){
            int idxzero=-1, cnt=0;
            for(int j=0;j<n;j++){
               if(m[j][i]==1) cnt++;
               else idxzero=j;
            }
        if(cnt==n-1) {
            if(flag){
             ans=idxzero;
            flag=false;
            }
          else return -1;
        }
        }
        if(ans!=-1){
        for(int i=0;i<n;i++){
           if(m[ans][i]==1) return -1;
        }
        }
      return ans;
    }
};
*/

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {  
       stack<int> st;
       for(int i=0;i<n;i++){
           st.push(i);
       }
       
       while(st.size()>1){
          int a=st.top();
          st.pop();
          int b=st.top();
          st.pop();
          if(m[a][b]==1) st.push(b);
          else st.push(a);
       }
        int ans=st.top();
        for(int i=0;i<n;i++){
            if(m[ans][i]==1) return-1;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(m[i][ans]==1) cnt++;
        }
        if(cnt!=n-1) return -1;
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
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends