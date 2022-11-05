//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    { stack<char> st;
     for(auto it:x){
         if(it=='{' or it=='(' or it=='[') st.push(it);
         else {
             if(st.size()==0) return false;
             else {
                 char c=st.top();
            if(c=='{' and it=='}' || 
            c=='[' and it==']' || c=='(' and it==')')  st.pop();
            else return false;
             }
         }
     }
     
     if(st.size()==0) return true;
     else return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends