class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        cout<<n;
        string r="";
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                r+='1';
            }
            else{
                r+='0';
            }
        }
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            if(r[31-i]=='1'){
                ans|=(1<<i);
            }
        }
        cout<<ans;
        return ans;
    }
};
