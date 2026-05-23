class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;

        bool sign = true;

        if(dividend >= divisor && divisor < 0) sign = false;
        else if(dividend < 0 && divisor > 0) sign = false;

        
        int cnt;
        long n = std::abs((long)dividend);
        long d = std::abs((long)divisor);
        long quoitent = 0;
      
       

        while(n >= d){
            cnt = 0;
            while(n >= (d << (cnt + 1)))
                cnt++;
                quoitent += (1 << cnt);
                n = n - (d * (1 << cnt));

                if(quoitent  == (1 << 31) && sign){
                    return INT_MAX;
                }

                 if(quoitent  == (1 << 31) && !sign){
                    return INT_MIN;
                }
        }
        return sign ? quoitent : -quoitent;
    }
};