class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];

        string ans = "";

        int minindex = min(first.size(),last.size());
        for(int i=0; i<minindex; i++){
            if(first[i] != last[i]) break;
            ans += first[i];
        }
        return ans;
    }
};