class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int ans = 0;
        map<int,int>mpp;
        for(auto it: nums)
        {
            mpp[it]++;
        }
        for(auto it: mpp){
            maxi = max(it.second,maxi);
        }
        for(auto it: mpp){
            if(it.second == maxi){
               ans = it.first;;
            }
        }
        return ans;
    }
};