class Solution {
public:
    int getSum(int a, int b) {
       int carry = a & b;
       int sum_wt_carry = a ^ b;
       int actual_sum = carry << 1;

       while(actual_sum != 0){
        carry = sum_wt_carry & actual_sum;
        sum_wt_carry = sum_wt_carry ^ actual_sum;
        actual_sum = carry << 1;
       }
       return   sum_wt_carry ;
    }
};