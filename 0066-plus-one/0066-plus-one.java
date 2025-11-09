class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 1;
        int n = digits.length -1;
        for(int i = n ; i>= 0 ; i--){
            int sum = carry + digits[i];
            digits[i] = sum%10;
            carry = sum/10;
        }
        if(carry==0) return digits;
        int[] ans = new int[digits.length+1];
        ans[0] = carry;
        for(int i = 1; i < ans.length ; i++){
            ans[i] = digits[i-1];
        }
        return ans;
    }
}