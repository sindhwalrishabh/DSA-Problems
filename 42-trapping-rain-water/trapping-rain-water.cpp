class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        
        int maxi = 0;
        for(int i = 0; i<n; i++){
            maxi = max(height[i],maxi);
            leftmax[i] = maxi;
        }
        int  maxi2 = 0;
        for(int i = n-1; i>=0; i--){
           maxi2 = max(height[i],maxi2);
           rightmax[i] = maxi2;
        }
        int water = 0;
        for(int i=0; i<n; i++){
            water += min(leftmax[i],rightmax[i]) - height[i];
        }
        return water;
    }
};