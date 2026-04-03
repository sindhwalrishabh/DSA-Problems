class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int peak = 0;
       int maxi = nums[0];
       for(int i=0; i<nums.size(); i++){
        if(maxi < nums[i]){
            maxi = nums[i];
            peak = i;
        }
       }
       return peak;
    }
};