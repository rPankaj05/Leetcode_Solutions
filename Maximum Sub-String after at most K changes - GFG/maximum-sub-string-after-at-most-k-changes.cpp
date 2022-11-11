//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		     int x=0;

     int i=0;

     int j=0;

     int ans=0;

     unordered_map<char,int>mp;

     while(j<s.size()){

         mp[s[j]]++;

         x=max(x,mp[s[j]]);

         if(j-i+1-x>k){

             mp[s[i]]--;

             i++;

         }

         ans=max(ans,j-i+1);

         j++;

         

     }

 

 return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends