//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            int freq1[26]={0};
            int freq2[26]={0};
            for(auto it:A){
                freq1[it-'a']=1;
            }
            
              for(auto it:B){
                freq2[it-'a']=1;
            }
           string ans="";
           for(int i=0;i<26;i++){
               if(freq1[i]+freq2[i]==1) {
                   ans.push_back(i+'a');
               }
           } 
           if(ans.size()==0) return "-1";
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends