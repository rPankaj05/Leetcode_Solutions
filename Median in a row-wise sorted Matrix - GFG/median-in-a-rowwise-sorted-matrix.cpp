//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
         int low=1, high=2000;
        while(low<=high){
            int mid=(low+high)/2;
            int x=0;
            for(int i=0;i<R;i++){
                int ub=(int)(upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin());
                x+=ub;
            }
           if(x<=((R*C)/2)) low=mid+1;
           else high=mid-1;
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends