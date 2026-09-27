class Solution {
public:
 vector<int> topo(int n,vector<vector<int>>& prerequisites ){
    vector<int> indegree(n,0);
    // vector<int> indegree(n, 0);
vector<vector<int>>adj(n);
for (auto p : prerequisites) {
    int course = p[0];
    int prerequisite = p[1];
    adj[prerequisite].push_back(course);
    indegree[course]++;
}
    vector<int>topo;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(int neighbour:adj[node]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    return topo;
 }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans=topo(numCourses,prerequisites);
        if(ans.size()==numCourses){
            return true;
        }
        return false;
    }
};
