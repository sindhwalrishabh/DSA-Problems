class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = n;
        int low = 0;
        int high = n-1;
        for(int i=0; i<n; i++){
            if(nums[i] >= target ){
                ans = i;
                break;
            }
        }
        return ans;
    }
};