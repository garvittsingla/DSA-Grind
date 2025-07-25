class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i =0; i <=15; i++){
            int ans = pow(4,i);
            if(n==ans){
                return true;
            }
        }
        return false;
    }
};