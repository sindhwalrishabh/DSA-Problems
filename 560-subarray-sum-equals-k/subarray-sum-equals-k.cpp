class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = 0;
        int cnt =0;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j =i; j<nums.size(); j++){
                sum += nums[j];

                if(sum == k){
                    len = max(j-i+1,len);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};