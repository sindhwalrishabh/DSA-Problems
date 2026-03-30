class Solution {
public:
    int binarys(vector<int>& nums,int low,int high,int target){
        if(low > high) return -1;
        int mid = (low + high)/2;
        if(target == nums[mid]) return mid;
        else if(target > nums[mid]){
            return  binarys(nums,mid+1,high,target);
        }
        else{
            return  binarys(nums,low,mid-1,target);
        }
    }
    int search(vector<int>& nums, int target) {
    return binarys(nums,0,nums.size()-1,target);
    }
};