//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int maxCoins(int n, vector<int> &arr) {
        vector<int> a(n+2);

        a[0]=a[n+1]=1;

        for(int i=0;i<n;++i)

        {

            a[i+1]=arr[i];

        }

        int d[n+2][n+2];

        memset(d,0,sizeof(d));

        int c=0;

        for(int i=n-1;i>=0;--i)

        {

            for(int j=i+2;j<=n+1;++j)

            {

                for(int k=i+1;k<=j-1;++k)

                {

                    c=d[i][k]+d[k][j]+a[i]*a[k]*a[j];

                    d[i][j]=max(c,d[i][j]);

                }

            }

        }

        return d[0][n+1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends