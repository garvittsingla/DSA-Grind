class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int carry = 1;
        int currentindex = digits.size() - 1;
        
        while (currentindex >= 0 || carry != 0) {
            int ele = carry;
            if (currentindex >= 0) {
                ele += digits[currentindex];
            }
            res.insert(res.begin(), ele % 10);
            carry = ele / 10;
            currentindex--;
        }
        return res;
    }
};
