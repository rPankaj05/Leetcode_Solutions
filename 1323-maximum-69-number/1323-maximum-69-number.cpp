class Solution {
public:
    int maximum69Number (int num) {
        string tmp;
        tmp=to_string(num);
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]=='6') { tmp[i]='9'; break;}
        }
        int ans=stoi(tmp);
        return ans;
    }
};