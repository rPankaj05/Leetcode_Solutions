//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends

int inValid(int x, int y,int n, int m){
    int dx[]={2,2,-2,-2,1,-1,1,-1};
    int dy[]={1,-1,1,-1,2,2,-2,-2};
    
    int ans=0;
    
    for(int i=0;i<8;i++){
        
        int newx=x+dx[i];
        int newy=y+dy[i];
        
        if(newx>=0 and newx<n and newy>=0 and newy<m) ans++;
    }
    
    return ans;
}



long long numOfWays(int n, int m)
{
    long long ans=0;
    long long mod=1e9+7;
    
   int totPos=n*m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int inValidPos=inValid(i,j,n,m);
            ans=((ans%mod)+(totPos-1-inValidPos)%mod)%mod;
        }
    }
    
    return ans;
}