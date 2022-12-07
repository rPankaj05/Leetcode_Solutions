//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    private: 
    
    
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
    
    
    
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {  
        vector<int> ans;
       for(int i=0;i<q;i++){
           int tmp=sqrt(query[i]);
           int cnt=0;
           for(int j=2;j<=tmp;j++){
               if(isPrime(j)) cnt++;
           }
           ans.push_back(cnt);
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends