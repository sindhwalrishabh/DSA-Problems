class Solution {
public:
    string frequencySort(string s) {
    int n = s.size();
    unordered_map<char,int> freq;
    for(char ch: s){
        freq[ch]++;
    }
    vector<vector<char>> bucket(n+1);
    for(auto &p : freq){
        bucket[p.second].push_back(p.first);
    }
    string ans ="";
    for(int i=n; i>=1; i--){
        for(char c: bucket[i]){
            ans += string(i,c);
        }
    }
    return ans;
    }
};