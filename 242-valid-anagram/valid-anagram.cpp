class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp;
        if(s.size() != t.size()) return false;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(auto it: t){
            if(mp.find(it) == mp.end() || mp[it] == 0){
                return false;
            }
            mp[it]--;
        }
        return true;
    }
};