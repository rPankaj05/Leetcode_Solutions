//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    stack<char> st;
   
    for(auto it:num){
        
       while(!st.empty() and it<st.top() and k>0) {
           st.pop();
           k--;
       }
       st.push(it);
    }
    
    while(k>0 and !st.empty()){
        st.pop();
        k--;
    }
    
    
    if(st.empty()) return "0";
    
    string ans="";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    
    while(ans.back()=='0') ans.pop_back();
    
    if(ans.size()==0) return "0";
    
    reverse(ans.begin(),ans.end());
    return ans;
    
}