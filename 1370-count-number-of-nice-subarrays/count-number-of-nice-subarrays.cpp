class Solution {
private:
    int atmost(vector<int>& nums, int k) {
        if(k < 0) return 0;
        int n = nums.size();
        int l = 0;
        int r =0;
        int sum =0;
        int cnt =0;
        while(r < n){
            sum += nums[r] % 2 ;
           while(sum > k){
                sum = sum - nums[l]%2;
                l++;
            }
            cnt += r-l+1;
            r++;
        }
       return cnt;
    }
public:
   int numberOfSubarrays(vector<int>& nums, int k){
    return atmost(nums,k) - atmost(nums,k-1);
   }
};