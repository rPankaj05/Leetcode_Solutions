//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	
 void solve(vector<vector<int>> &A, int n, int i, int j, vector<int> &ans) {
	    while(i<n and j>=0){
	        ans.push_back(A[i][j]);
	        i++, j--;
	    }
	 
	}
	
	
	
	
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	 {  
	    int n=N;
	
		vector<int> ans;
	
	for(int j=0;j<n;j++) solve(A,n,0,j,ans);
	
	for(int i=1;i<n;i++) solve(A,n,i,n-1,ans);
		
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends