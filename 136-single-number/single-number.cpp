class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int,int> mp;
         int appear = 0;
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    for(auto it: mp){
        if(it.second == 1){
            appear = it.first;
        }
    }
    return appear;
    }
};