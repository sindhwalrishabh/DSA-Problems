class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> mergedintervals;
        int n = intervals.size();
        if(intervals.size() == 0){
            return mergedintervals;
        }
        vector<int>tempintervals = intervals[0];
        for(auto it: intervals){
            
            if(it[0] <= tempintervals[1]){
                tempintervals[1] = max(it[1],tempintervals[1]);
            }
            else{
                mergedintervals.push_back(tempintervals);
                tempintervals = it;
            }
        }
        mergedintervals.push_back(tempintervals);
        return mergedintervals;
    }
};