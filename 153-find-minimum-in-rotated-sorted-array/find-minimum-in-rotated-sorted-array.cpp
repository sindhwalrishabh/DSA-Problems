class Solution {
public:
    int findMin(vector<int>& nums) {
        int min_element = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            min_element = min(nums[i],min_element);
        }
        return min_element;
    }
};