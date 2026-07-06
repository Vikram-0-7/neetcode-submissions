class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="+"){
                int previous=s.top();
                s.pop();
                int second=s.top();
                s.pop();
                s.push(second);
                s.push(previous);
                s.push(previous+second);
            }
            else if(operations[i]=="D"){
                int ele=2*(s.top());
                s.push(ele);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(s.size()>0){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};