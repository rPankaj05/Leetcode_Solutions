

class Solution {
   

    
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<long long int> st;
        
        for(auto it:tokens){
            if(it=="+" || it=="-" || it=="*" || it=="/"){
                long long int b=st.top();  st.pop();
                long long int a=st.top();  st.pop();
                if(it=="+") st.push(a+b);
                if(it=="-") st.push(a-b);
                if(it=="*") st.push(a*b);
                if(it=="/") st.push(a/b);
             }
            else {
               st.push(stoi(it));  
            }
        }
        
        return st.top();
    }
};