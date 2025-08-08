class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int end = x;    
        int mid = start+ (end-start)/2;
        int possible = x;
        while(start <= end){
            long long sqaure =(long long)mid*mid;

            if(sqaure<=x){
                possible = mid;
                start = mid+1;
            }else{
                end = mid -1;
                
            }
            mid = start+ (end-start)/2;

        }
        return possible;
    }
};