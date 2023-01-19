//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    int ans=0;
    

    
    
    public:
    int carpetBox(int A, int B, int C, int D){
      
       if(A>B)  swap(A,B);
       if(C>D)  swap(C,D);
       
       if(A<=C and B<=D) return 0;
       
       else if(A>C and A>D) return 1+carpetBox(A/2,B,C,D) ;
       
       else if(B>C and B>D) return 1+carpetBox(A,B/2,C,D) ;
       
       else return 1+min(carpetBox(A/2,B,C,D),carpetBox(A,B/2,C,D));
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends