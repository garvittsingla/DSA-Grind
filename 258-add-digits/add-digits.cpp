class Solution {
public:
    int recursion(int num){

        int sum = 0;
        while(num > 0){
            int rem = num%10;
            sum += rem;
            num = num/10;
        }
        return sum >= 10 ? recursion(sum) : sum;

    }
    int addDigits(int num) {
        return recursion(num);
    }
};