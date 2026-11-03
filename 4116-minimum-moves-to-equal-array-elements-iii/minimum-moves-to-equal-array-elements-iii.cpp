class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt = 0;
        int max_el = *max_element(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            while(nums[i] <= max_el){
                if(nums[i] == max_el) break;

                nums[i]++;
                cnt++;
            }
        }
        return cnt;
    }
};