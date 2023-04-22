//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
         vector<int> dup(arr);
        sort(dup.begin(),dup.end());
        vector<long long>prefix(dup.begin(),dup.end());
        vector<long long>ans;
        for(int i=1;i<n;i++){
            prefix[i]+=prefix[i-1];
        }
        for(auto val:arr){
            int index=lower_bound(dup.begin(),dup.end(),val)-dup.begin();
            if(index==0)
                ans.push_back(0);
            else
            ans.push_back(prefix[index-1]);
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
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends