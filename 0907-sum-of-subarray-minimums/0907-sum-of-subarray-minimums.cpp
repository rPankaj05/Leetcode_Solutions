//int mod=1e9+7;

// class Solution {
// public:
//     int sumSubarrayMins(vector<int>& arr) {
//         int n=arr.size();
//         int ans = 0;
//         for (int i = 0; i < n; i++) {
//             int min_ele = arr[i];
//             for (int j = i; j < n; j++) {
//                 min_ele = min(min_ele, arr[j]);
//                 ans += min_ele;
//                 ans=ans%mod;
//             }
//         }
//         return ans%mod;
//     }
// };





 void nextSmallerElement(int n,vector<int> &arr,vector<int> &nextSmaller){
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() and arr[st.top()]>=arr[i]) st.pop();
        if(!st.empty()) nextSmaller[i]=st.top();
        else nextSmaller[i]=-1;
        st.push(i);
   }
}

void prevSmallerElement(int n,vector<int> &arr,vector<int> &prevSmaller){
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() and arr[st.top()]>arr[i]) st.pop();
        if(!st.empty()) prevSmaller[i]=st.top();
        else prevSmaller[i]=-1;
        st.push(i);
   }
}


int mod=1e9+7;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long int ans=0;
        vector<int> nextSmaller(n,-1);
        vector<int> prevSmaller(n,-1);
        nextSmallerElement(n,arr,nextSmaller);
        prevSmallerElement(n,arr,prevSmaller);
        
        for(int i=0;i<n;i++){
           long long int rightd=n-i;
           long long int leftd=i+1;
           if(nextSmaller[i]!=-1) rightd=nextSmaller[i]-i;
           if(prevSmaller[i]!=-1) leftd=i-prevSmaller[i];
           ans+=(((rightd*leftd)%mod)*arr[i])%mod;
           ans=ans%mod;
        }
        
        return ans;
    }
};

