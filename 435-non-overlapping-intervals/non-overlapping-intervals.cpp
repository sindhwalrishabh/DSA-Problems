bool comp(vector<int>&a,vector<int>&b){
        return a[1] < b[1];
    }
class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int n = intervals.size();
        int prev_end = intervals[0][1];
        int cnt = 1;
        for(int i=1; i<n; i++){
            if( intervals[i][0] >= prev_end){
                cnt++;
                prev_end = intervals[i][1];
            }
        }
        return n - cnt ;
    }
};