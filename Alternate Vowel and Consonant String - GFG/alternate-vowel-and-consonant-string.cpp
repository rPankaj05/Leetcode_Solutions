//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string S, int N)
    {  map<char,int> mp;
       for(auto it: S) mp[it]++;
       
        string vow="";
        string cons="";
       for(auto it:mp) {
           int c=it.first;
           int n=it.second;
           while(n--){
           if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
               vow.push_back(c);
           }
           else cons.push_back(c);
           }
       }
       
        int n=vow.size();
        int m=cons.size();
        
        if(abs(m-n)>1) return "-1";
        
      
        
        string ans="";
        
        if(n>=m){
            int i=0;
            while(i<m){
                ans.push_back(vow[i]);
                ans.push_back(cons[i]);
                i++;
            }
            if(i<n) ans.push_back(vow[i]);
        }
        
        else {
            int i=0;
             while(i<n){
                ans.push_back(cons[i]);
                ans.push_back(vow[i]);
                i++;
            }
            if(i<m) ans.push_back(cons[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends