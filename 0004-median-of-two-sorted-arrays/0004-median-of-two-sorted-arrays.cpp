class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector<int> out;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i]<=nums2[j]){
                out.push_back(nums1[i++]);
            }else{
                out.push_back(nums2[j++]);
            }
            
        }
        while(i<nums1.size()){
             out.push_back(nums1[i++]);
        }
         while(j<nums2.size()){
             out.push_back(nums2[j++]);
        }

        int length = out.size();
        bool isEven = length%2 == 0 ? true  :false;
        float ans =0;
        if(isEven){
            int half = out.size()/2;
            ans =  (out[half] + out[half-1])/2.0;
        }
        else{
            ans = out[out.size()/2];
        }

        return (float)ans;
        
    }
};