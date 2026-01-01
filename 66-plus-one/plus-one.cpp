class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        int i = digits.size()-1;
        while(i>=0){
            int sum = carry + digits[i];
            if(sum>9){
                carry = sum/10;
            }else{
                carry = 0;
            }
            ans.insert(ans.begin(),sum%10);
            i--;

        }
        if(carry>0){
            ans.insert(ans.begin(),carry%10);

        }
        return ans;
    }
};