class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            int r=(target-nums[i]);
            if(m.find(r)!=m.end()){
                result.push_back(m[r]);
                result.push_back(i);
                break;
            }
            else{
                m[nums[i]]=i;
            }
        }
        return result;
    }
};
