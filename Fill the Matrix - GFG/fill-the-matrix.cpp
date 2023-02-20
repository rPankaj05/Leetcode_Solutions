//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int n, int m, int x, int y){    
        int a,b,c,d;
        int dis_from_left_top_corner=a=x-1+y-1;
        int dis_from_left_bottom_corner=b=(n-x)+y-1;
        int dis_from_right_top_corner=c=x-1+(m-y);
        int dis_from_right_bottom_corner=d=(n-x)+(m-y);
        
        return max(a,max(b,max(c,d)));
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends