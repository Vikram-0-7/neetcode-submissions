class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int x:nums){
            map[x]++;
        }
        vector<pair<int,int>>v;
        for(auto it=map.begin();it!=map.end();++it){
            v.push_back({it->second,it->first});
        }
        sort(v.rbegin(),v.rend());
        vector<int>result;
        for(int i=0;i<k;++i){
            result.push_back(v[i].second);
        }
        return result;
    }
};
