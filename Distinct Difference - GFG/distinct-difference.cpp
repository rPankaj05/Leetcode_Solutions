//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int n, vector<int> &A) {
        set<int> left;
        set<int> right;
        vector<int> leftArr(n,0);
        vector<int> rightArr(n,0);
        for(int i=0;i<n;i++){
            leftArr[i]=left.size();
            left.insert(A[i]);
           
        }
        for(int i=n-1;i>=0;i--){
            rightArr[i]=right.size();
            right.insert(A[i]);
        }
     
     vector<int> ans(n,0);
     for(int i=0;i<n;i++){
        ans[i]=leftArr[i]-rightArr[i];
      }
    return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends