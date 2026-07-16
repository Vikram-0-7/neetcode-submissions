class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(int k=0;k<t.size();k++){
            freq[t[k]]--;
        }
        for(auto it=freq.begin();it!=freq.end();++it){
            if(it->second){
                return false;
            }
        }
        
        return true;
        

    }
};
