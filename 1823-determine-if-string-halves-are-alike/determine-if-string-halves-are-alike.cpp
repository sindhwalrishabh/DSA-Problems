class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "";
        string b = "";
        int low = 0;
        int high = s.size() -1;
        int mid = (low + high)/2;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0; i<=mid; i++){
            if(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'O' || s[i] == 'A'
            || s[i] == 'E'|| s[i] == 'I'|| s[i] == 'o'|| s[i] == 'e' || s[i] == 'u'
            || s[i] == 'U'){
                cnt1++;
            }
            a += s[i];
        }
        for(int i = mid +1; i<=high; i++){
            if(s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'O' || s[i] == 'A'
            || s[i] == 'E'|| s[i] == 'I'|| s[i] == 'o'|| s[i] == 'e' || s[i] == 'u'
            || s[i] == 'U'){
                cnt2++;
            }
            b += s[i];
        }
        if(cnt1 == cnt2){ return true;
        }
        return false;
    }
};