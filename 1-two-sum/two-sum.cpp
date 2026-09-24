class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            int targeet = target - nums[i];
            if(mpp.find(targeet) != mpp.end()){
                return {mpp[targeet],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};