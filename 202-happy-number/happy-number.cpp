class Solution {
public:
    int squaresum(int num){
        int ans = 0 ;
        while(num > 0){
            int x = num%10;
            ans += x*x;
            num = num /10;
        }
        return ans;
    }
    bool isHappy(int n) {

        if( n == 1) return true;
        int slow = squaresum(n);
        int fast = squaresum(squaresum(n));

        while(slow != fast){
            slow = squaresum(slow);
            fast = squaresum(squaresum(fast));

            if(slow == 1 || fast == 1) return true;
        }
        return slow == 1;
    }
};