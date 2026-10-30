class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int>merge;
        for(auto it : nums1){
            merge.push_back(it);
        }
        for(auto it: nums2){
            merge.push_back(it);
        }
        sort(merge.begin(),merge.end());

         int total = merge.size();
        if(total % 2 == 1){
            return merge[total / 2];
        }
        else{
            return ((double) merge[total/2 - 1] + merge[total/2])/2.0;
        }
    }
};