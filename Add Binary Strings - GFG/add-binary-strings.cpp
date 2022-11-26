//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{   
	     if(A.size()==0) return B; 
	     if(B.size()==0) return A; 
	    
	    reverse(A.begin(),A.end());
	    reverse(B.begin(),B.end());
	    
	    string ans="";
	    
	    int n=A.size(), i=0;
	    int m=B.size(), j=0;
	    
	    int carry=0;
	    
	    while(i<n and j<m){
	       int tmp=A[i++]-'0' + B[j++]-'0' + carry; 
	       ans.push_back(tmp%2 +'0');
	       carry=tmp/2;
	      
	    }
	    
	    while(i<n){
	       int tmp=A[i++]-'0' + carry;
	       ans.push_back(tmp%2+'0');
	       carry=tmp/2;
	    }
	    
	     while(j<m){
	       int tmp=B[j++]-'0' + carry;
	       ans.push_back(tmp%2+'0');
	       carry=tmp/2;
	     }
	     
	     if(carry==1) ans.push_back('1');
	     
	     while(ans[ans.size()-1]=='0') ans.pop_back();
	      
	     reverse(ans.begin(),ans.end());
	     
	     
	     return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends