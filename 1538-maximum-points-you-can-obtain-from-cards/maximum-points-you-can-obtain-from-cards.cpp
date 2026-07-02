class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        int rsum = 0;
        int max_score = 0;
        for(int i = 0; i <= k-1; i++){
            lsum += cardPoints[i];
            max_score = lsum;
        }
       int rindex = n-1;
       for(int i = k-1; i>=0; i--){
        lsum = lsum - cardPoints[i];
        rsum += cardPoints[rindex];
        rindex--;
        max_score = max(max_score,lsum + rsum);
       }
        return max_score;
    }
};