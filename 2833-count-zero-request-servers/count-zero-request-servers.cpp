class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(logs.begin(), logs.end(), [](const vector<int>& vec1, const vector<int>& vec2) {
            return vec1[1] < vec2[1];
        });
        
        int q = queries.size();
        int m = logs.size();
        vector<int> result(q);
        vector<pair<int,int>> timeIndex(q); // {time, original index}
        
        for(int i = 0; i < q; i++){
            timeIndex[i] = {queries[i], i};
        }
        sort(timeIndex.begin(), timeIndex.end());
        
        unordered_map<int, int> mp;
        int i = 0, j = 0;
        
        for (auto& p : timeIndex) {
            int time = p.first;   // Use .first instead of [0]
            int idx = p.second;  // Use .second instead of [1]
            int start = time - x;
            int end = time;
            
            // Expand window to include logs up to `end`
            while (j < m && logs[j][1] <= end) {
                mp[logs[j][0]]++;
                j++;
            }
            
            // Shrink window from the left to remove logs older than `start`
            while (i < m && logs[i][1] < start) {
                mp[logs[i][0]]--;
                if (mp[logs[i][0]] == 0) {
                    mp.erase(logs[i][0]);
                }
                i++;
            }
            
            result[idx] = n - mp.size();
        }
        
        return result;
    }
};