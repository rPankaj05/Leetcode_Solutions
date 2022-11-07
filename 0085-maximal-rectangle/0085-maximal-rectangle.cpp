class Solution {
   
    private:
    
     vector<int> nextSmaller(vector<int> vec,int n){
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and vec[st.top()]>=vec[i]) st.pop();
            if(st.empty()) ans[i]=-1;
            else ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    
      vector<int> prevSmaller(vector<int> vec,int n){
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() and vec[st.top()]>=vec[i]) st.pop();
            if(st.empty()) ans[i]=-1;
            else ans[i]=st.top();
            st.push(i);
        }
        
        return ans;
    }
    
    int maxArea(vector<int> vec,int n){
        
        vector<int> next(n);
        next=nextSmaller(vec,n);
         vector<int> prev(n);
        prev=prevSmaller(vec,n);
        
        int ans=0;
        for(int i=0;i<n;i++){
            int l=vec[i];
            if(next[i]==-1) next[i]=n;
            int b=next[i]-prev[i]-1;
            ans=max(ans,l*b);
        }
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    
    
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<vector<int>> M(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1') M[i][j]=1;
            }
        }
        
        
        
     
        int ans=maxArea(M[0],m);
       for(int i=1;i<n;i++){
           for(int j=0;j<m;j++){
               if(M[i][j]!=0) 
                 M[i][j]+=M[i-1][j];
                else M[i][j]=0;
           }
           ans=max(ans,maxArea(M[i],m));
       }
       return ans;
    }
};