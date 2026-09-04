class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int Totalsum = 0;
        for(int num : nums){
            Totalsum += num;
        }
        int leftsum = 0;
        int rightsum =0;
        for(int i=0; i<nums.size(); i++){
            rightsum = Totalsum - leftsum - nums[i];
            if(rightsum == leftsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};