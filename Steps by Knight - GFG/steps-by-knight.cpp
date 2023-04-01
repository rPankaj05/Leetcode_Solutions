//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    int kx=KnightPos[0]-1, ky=KnightPos[1]-1;
	    int tx=TargetPos[0]-1, ty=TargetPos[1]-1;
	    if(kx==tx and ky==ty) return 0;
	    int ans=0;
	    queue<pair<int,int>> q;
	    q.push({kx,ky});
	    vector<vector<int>> vis( n , vector<int> (n, 0)); 
	    vis[kx][ky]=1;
	    while(!q.empty()){
	        int size=q.size();
	        ans++;
	        while(size--){
	            auto it=q.front();
	            q.pop();
	            int x=it.first;
	            int y=it.second;
	            
	            int dx[]={1,-1,1,-1,2,-2,2,-2};
	            int dy[]={2,2,-2,-2,1,1,-1,-1};
	            for(int i=0;i<8;i++){
	                int nx=x+dx[i];
	                int ny=y+dy[i];
	                if(nx==tx and ny==ty) return ans;
	                if(nx>=0 and nx<n and ny>=0 and ny<n and !vis[nx][ny]) {
	                    vis[nx][ny]=1;
	                    q.push({nx,ny});
	                }
	            }
	        }
	    }
	   return ans; 
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends