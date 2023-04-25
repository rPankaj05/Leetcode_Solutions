//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    private:
     
     void smallerInLeft(int n,vector<int> &arr, vector<int> &left){
         stack<int> st;
         for(int i=0;i<n;i++){
             while(!st.empty() and arr[st.top()]>=arr[i]) st.pop();
             if(st.empty()) left[i]=-1;
             else left[i]=st.top();
             st.push(i);
         }
     } 
     
     void smallerInRight(int n,vector<int> &arr, vector<int> &right){
         stack<int> st;
         for(int i=n-1;i>=0;i--){
             while(!st.empty() and arr[st.top()]>=arr[i]) st.pop();
             if(st.empty()) right[i]=-1;
             else right[i]=st.top();
             st.push(i);
         }
     }
    
    
    
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {  
        int n=arr.size();
        vector<int> left(n);
        vector<int> right(n);
        
        smallerInLeft(n,arr,left);
        smallerInRight(n,arr,right);
        
        vector<int> ans(n);
        for(int i=0;i<n;i++){
           if(left[i]==-1) ans[i]=right[i];
           else if(right[i]==-1) ans[i]=left[i];
           else {
               int leftdiff=i-left[i];
               int rightdiff=right[i]-i;
               if(leftdiff<rightdiff) ans[i]=left[i];
               else if(leftdiff>rightdiff) ans[i]=right[i];
               else{
                  if(arr[left[i]]<=arr[right[i]]) ans[i]=left[i];
                  else ans[i]=right[i];
               }
           }
               
           }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends