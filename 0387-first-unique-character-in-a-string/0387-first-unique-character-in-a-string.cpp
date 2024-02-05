class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        vector<int> vec(256,0);
        for (auto it:s) vec[it]++;
        for(int i=0;i<n;i++){
            if(vec[s[i]]==1) return i;
        }
        return -1;
    }
};