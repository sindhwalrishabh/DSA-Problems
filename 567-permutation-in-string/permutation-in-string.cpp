class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<int>s1_freq(26,0);
        vector<int>s2_freq(26,0);

        for(char &ch : s1){
            s1_freq[ch- 'a']++;
        }

        int left = 0;
        int right = 0;
        while(right < m){
            s2_freq[s2[right] - 'a']++;

            if(right - left + 1 > n){
                s2_freq[s2[left]-'a']--;
                left++;
            }

            if(s1_freq == s2_freq) return true;

            right++;
        }
        return false;
    }
};