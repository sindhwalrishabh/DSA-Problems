 bool comp(vector<int>& v1, vector<int>& v2){
       if (v1[0] == v2[0])
            return v1[1] > v2[1];

        return v1[0] < v2[0];
    }
class Solution {
public:
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n = intervals.size();
        int cnt = 1;
        int lastinterval = intervals[0][1];
        for(int i=1; i<n; i++){
            if( lastinterval >= intervals[i][1]){
                continue;
            }
            lastinterval = intervals[i][1];
            cnt++;
        }
        return cnt;
    }
};