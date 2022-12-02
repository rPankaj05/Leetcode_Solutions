//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
    private:
      int maxElement(vector<int> a,int n){
    int mx=-1;
    for(int i=0;i<n;i++) mx=max(mx,a[i]);
    return mx;
}
bool isPossible(vector<int> a, int n, int mid,int k){
    int cows=1;
    int lastPos=a[0];
    for(int i=0;i<n;i++){
        if((a[i]-lastPos)>=mid) {
            cows++;
            if(cows==k) return true;
            lastPos=a[i];
        }
    }
    return false;
}
    
public:

    int solve(int n, int k, vector<int> &a) {
    
       sort(a.begin(),a.end());
    
    int start=0;
    int end=maxElement(a,n);
    int mid=0;
    int ans=0;
    while(start<=end){
        mid=(start+end)/2;
        if(isPossible(a,n,mid,k)){
           ans=mid;
            start=mid+1;
        }
        else end=mid-1;
    }
 return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends