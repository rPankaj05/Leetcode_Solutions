//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {   
        set<char> st;
        for(auto it: str) st.insert(it);
        int n=st.size();
        int cnt=0;
        unordered_map<char,int> mp;
        mp[str[0]]=1;
        cnt++;              
        int i=0, j=1;
        int ans=INT_MAX;
        str.push_back('*');
        int m=str.size();
        while(i<=j and j<m){
            if(cnt<n){
                if(mp[str[j]]==0) cnt++;
                mp[str[j]]++;
                j++;
               }
               
            else{
               ans=min(ans,j-i);
               if(mp[str[i]]==1) cnt--;
               mp[str[i]]--;
               i++;
              }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends