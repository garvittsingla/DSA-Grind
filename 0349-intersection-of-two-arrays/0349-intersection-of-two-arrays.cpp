class Solution {
public:
    bool binarysearch(vector<int> nums,int target){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       
        unordered_set<int> maybe;

        sort(nums2.begin(),nums2.end());
        for(auto num : nums1){
            if(binarysearch(nums2,num)){
                maybe.insert(num);
            }
        }
        
        return vector<int>(maybe.begin(),maybe.end());
    }
};