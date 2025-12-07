class Solution {
public:
    bool isPossible(vector<int> &nums,int threshold,int divisor){
        int sum = 0;
        for(auto it : nums){
            sum += ceil((double)it/divisor);
        }
        if(sum <= threshold) return true;
        return false;
    }
    int maxelement(vector<int> &nums){
        int max = nums[0];
        for(auto it : nums){
            if(it>max){
                max = it;
            }
        }
        return max;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = maxelement(nums);
        int possible = end;
        while(start <= end){
            int mid = start + (end-start)/2;

            if(isPossible(nums,threshold,mid)){
                possible = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return possible;
    }
};