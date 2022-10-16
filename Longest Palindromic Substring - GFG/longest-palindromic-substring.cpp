//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        int n=S.size();
        if(n==0 and n==1) return S;
        int idx=0, length=0;
        for(int i=0;i<n;i++){
            int low=i-1, high=i+1;
            while(low>=0 and S[i]==S[low]) low--;
            while(high<n and S[i]==S[high]) high++;
            while(low>=0 and high<n and S[low]==S[high]) low--, high++;
            if(length<high-low-1)
            idx=low+1, length=high-low-1;
        }
        
        return S.substr(idx,length);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends