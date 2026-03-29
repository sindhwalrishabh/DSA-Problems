class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        vector<int>even;
        vector<int>odd;
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                odd.push_back(nums[i]);
            }
            else{
                even.push_back(nums[i]);
            }
        }
            int i = 0;
            int j =0;
            while( i < even.size() && j < odd.size()){
                ans.push_back(even[i++]);
                ans.push_back(odd[j++]);
            }
            while(i < even.size()){
                ans.push_back(even[i++]);
            }
            while(j < odd.size()){
                ans.push_back(odd[j++]);
            }
            return ans;
        }
};