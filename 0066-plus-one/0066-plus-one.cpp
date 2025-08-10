class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        int i = digits.size()-1;
        while(carry >0 || i >= 0){
            int sums;
            if(i >=0){
                sums = digits[i]+carry;
            }else{
                sums = carry;
            }
            carry = sums/10;
            ans.insert(ans.begin(),sums%10);
            i--;
        }
        return ans;
    }
};