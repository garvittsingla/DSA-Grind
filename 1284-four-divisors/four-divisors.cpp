class Solution {
public:
    int helper(int num){
        int sum = 0;
        int divisors = 0;
        for(int i = 1 ; i*i <= num ; i++){
            if(num%i == 0){
                int first = i;
                int second = num/i;

                if(first==second){
                    divisors+=1;
                    sum+=first;
                }else{
                    divisors+=2;
                    sum+=(first+second);
                }

                if(divisors>4) return 0;
            }
        }
        return divisors == 4 ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        for(auto num:nums){
            result+=helper(num);
        }
        return result;
    }
};