class Solution {
public:
   int numberOfSubarrays(vector<int>& nums, int k){
    unordered_map<int,int>mp;
    int n = nums.size();
    int oddcnt = 0;
    mp[oddcnt] = 1;
    int result = 0;
    for(int i=0; i<n; i++){
        oddcnt += (nums[i]%2);

        if(mp.count(oddcnt - k)){
            result += mp[oddcnt - k];
            }
        mp[oddcnt]++;
    }
    return result;
   }
};