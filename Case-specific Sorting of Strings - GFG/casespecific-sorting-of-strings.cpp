//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string low="";
       
        string uper="";
       
        for(int i=0;i<n;i++){
            if(str[i]<='Z' and str[i]>='A') uper.push_back(str[i]);
            else low.push_back(str[i]);
        }
        
        string ans="";
        
        sort(low.begin(),low.end());
        sort(uper.begin(),uper.end());
        
        int j=0, k=0;
    
        for(int i=0;i<n;i++){
            if(str[i]<='Z' and str[i]>='A') ans.push_back(uper[j++]);
            else ans.push_back(low[k++]);
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
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends