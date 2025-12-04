class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int end = x;
        int possible = x;
        while(start <= end){
            long long mid = start + (end-start)/2;
            long long square = mid*mid;
            if((int)square== x){
                return mid;
            };

            if(mid*mid > x){
                end = mid-1;
            }else{
                possible = mid;
                start = mid+1;
            }

        }
        return possible;
    }
};