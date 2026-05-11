class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int longest=0;
     unordered_set<int>k(nums.begin(),nums.end());
     for(int n:k){
        int length=0;
        while(k.find(n+length)!=k.end()){
            length++;
        }
        longest=max(longest,length);
     }   
     return longest;
    }
};
