class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        sort(firstList.begin(),firstList.end());
        sort(secondList.begin(),secondList.end());
        int n = firstList.size();
        int m = secondList.size();
        vector<vector<int>>res;
        vector<int>temp(2);
        int i = 0;
        int j = 0;
       
        while( i < n && j < m){
            int firstlist_sp = firstList[i][0];
            int firstlist_ep = firstList[i][1];

            int secondlist_sp = secondList[j][0];
            int secondlist_ep = secondList[j][1];

            if(secondlist_sp <= firstlist_ep &&  firstlist_sp <= secondlist_ep ){
                temp[0] = max(firstlist_sp,secondlist_sp);
                temp[1] = min(firstlist_ep,secondlist_ep);

                res.push_back(temp);
            }
           if(firstlist_ep < secondlist_ep){
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};