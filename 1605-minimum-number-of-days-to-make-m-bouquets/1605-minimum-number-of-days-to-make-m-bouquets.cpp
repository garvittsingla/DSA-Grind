class Solution {
public:
    int findmin(vector<int> nums){
        int smallest = nums[0];
        for(auto &it:nums){
            if (it < smallest){
                smallest = it;
            }
        }
        return smallest;
    }
     int findmax(vector<int> nums){
        int largest = nums[0];
        for(auto &it:nums){
            if (it > largest){
                largest= it;
            }
        }
        return largest;
    }
    bool makebouqets(int day,int m,int k,vector<int> nums){
        int bouquets = 0;
        int flowers = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= day) { 
                flowers++;  
                if (flowers == k) {  
                    bouquets++;
                    flowers = 0;     
                }
            } else {
                flowers = 0;  
            }

            if (bouquets >= m) return true; 
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = findmin(bloomDay);
        int end = findmax(bloomDay);
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(makebouqets(mid,m,k,bloomDay)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};