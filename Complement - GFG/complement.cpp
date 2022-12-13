//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        
        vector<int> v(n,1);
     
        for(int i=0;i<n;i++){
            if(str[i]=='1') v[i]=-1;
        }
      
        int start_index=-1;
        int end_index=-1;
        int st=0;
        int currSum=0;
        int mxSum=INT_MIN;
        for(int i=0;i<v.size();i++){
            currSum+=v[i];
            if(currSum>mxSum){
                mxSum=currSum;
                start_index=st;
                end_index=i;
            }
            if(currSum<0){
                st=i+1;
                currSum=0;
            }
        }
        
        if(mxSum==-1) return {-1};
        
        return {start_index+1,end_index+1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends