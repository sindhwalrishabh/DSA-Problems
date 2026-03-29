class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane algo
        int sum =0;
        int start =0;
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if( sum == 0){
                start =i;
            }
            sum += nums[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};