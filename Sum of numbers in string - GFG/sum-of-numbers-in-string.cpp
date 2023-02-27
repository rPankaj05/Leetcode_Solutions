//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends

#include<bits/stdc++.h> 

class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
       int ans=0;
       int currsum=0;
       
       for(char it:str){
           
           if(it>='0' and it<='9'){
              currsum=currsum*10+it-'0';
           }
           else {
               ans+=currsum;
               currsum=0;
           }
       }
        ans+=currsum;
       return ans;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends