class Solution {
public:
        

    string encode(vector<string>& strs) {
        string r="";
        for(string &s:strs){
            r+=to_string(s.size())+'#'+s;
            
        }
        return r;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> result;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int l=stoi(s.substr(i,j-i));
            i=j+1;
            j=l+i;
            string r=s.substr(i,l);
            result.push_back(r);
            i=j;

        }
        return result;
       
    }
};
