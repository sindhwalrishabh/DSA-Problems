class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        vector<int> prev = points[0];
        int n = points.size();
        int cnt = 1;
        for(int i=1; i<n; i++){
            int curr_Startpt = points[i][0];
            int curr_Endpt = points[i][1];

            int prev_Startpt = prev[0];
            int prev_Endpt = prev[1];

            if(curr_Startpt > prev_Endpt){
                cnt++;
                prev = points[i];
            }
            else{
                prev[0] = max(curr_Startpt,prev_Startpt);
                prev[1] = min(curr_Endpt,prev_Endpt);
            }
        }
        return cnt;
    }
};