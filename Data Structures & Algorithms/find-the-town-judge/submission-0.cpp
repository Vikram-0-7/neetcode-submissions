class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>s(n+1,0);
        for(auto &t : trust){
            int a =t[0];
            int b =t[1];
            s[a]--;
            s[b]++;
        }
        for(int i=1;i<=n;i++){
            if(s[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};