class Solution {
public:
    bool isValid(vector<int>& nums,int n,int k,int maxallowedpages){
        int student = 1 , pages = 0;
        for(int i=0; i<n; i++){

            if(nums[i] > maxallowedpages) return false;
            if(pages + nums[i] <= maxallowedpages){
                pages += nums[i];
            }
            else{
                student++;
                pages = nums[i];
            }

            if(student > k) return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        long long all_sum = 0;
        int n = nums.size();
        for(auto it: nums){
            all_sum += it;
        }
        if(k > n) return -1;

long long low = 0, high = all_sum, ans = -1;

        while(low <= high){
            long long mid = low + (high - low) / 2;

            if(isValid(nums,n,k,mid)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};