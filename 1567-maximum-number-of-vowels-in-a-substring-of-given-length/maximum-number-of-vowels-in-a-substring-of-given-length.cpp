class Solution {
public:
    bool isVowel(char &ch){
        return ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int left = 0;
        int right = 0;
        int n = s.length();
        int maxiv = 0;
        int cnt =0;
        while(right < n){
            if(isVowel(s[right])){
                cnt++;
            }
            if(right - left + 1 == k){
                    maxiv = max(maxiv,cnt);

                    if(isVowel(s[left])){
                        cnt--;
                    }
                left++;
            }
            right++;
        }
        return maxiv;
    }
};