class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        double product;
        for (int i = 0; i < n; i++) {
             product = 1;
            for (int j = i; j < n; j++) {
                product = product * nums[j];

                if (product < k) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};