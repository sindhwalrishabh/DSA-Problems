class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n = s.length();
        int m = p.length();
        vector<int>s_freq(26,0);
        vector<int>p_freq(26,0);

        for(char &ch : p){
            p_freq[ch-'a']++;
        }

        int left = 0;
        int right = 0;
        while(right < n){

            s_freq[s[right]-'a']++;

            if(right - left + 1 > m){
                s_freq[s[left]-'a']--;
                left++;
            }

            if(p_freq == s_freq){
                ans.push_back(left);
            }
            right++;
        }
        return ans;
    }
};