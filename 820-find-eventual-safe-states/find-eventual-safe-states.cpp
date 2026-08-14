class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>>adjRev(graph.size());
        vector<int>indegree(graph.size(),0);

        for(int i=0; i<graph.size(); i++){
            for(auto it: graph[i]){
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }
        queue<int>q;
        for(int i=0; i<graph.size(); i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int>safeNode;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            safeNode.push_back(node);

            for(auto it: adjRev[node]){
                indegree[it]--;

                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        sort(safeNode.begin(),safeNode.end());
        return safeNode;
    }
};