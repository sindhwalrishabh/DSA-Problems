class Solution {
public:
    bool canJump(vector<int>& nums) {
           int n = nums.size();
    int max_Index = 0;
    for(int i=0; i<n; i++){
       
        if(i > max_Index) return false;
         max_Index = max(max_Index, nums[i]+i);
        }
      return true;
    }
};