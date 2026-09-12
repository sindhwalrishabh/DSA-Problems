class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>ans(intervals.size());
        
        int n = intervals.size();
        for(int i=0; i<n; i++){
        int minstart = INT_MAX;
        int index = -1;
            for(int j=0; j<n; j++){
                if(intervals[j][0] >= intervals[i][1] && minstart > intervals[j][0]){
                    index = j;
                    minstart = intervals[j][0];
                }
            }
            ans[i] = index;
        }
        return ans;
    }
};