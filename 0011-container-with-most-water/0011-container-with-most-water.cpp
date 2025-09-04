class Solution {
public:
    int maxArea(vector<int>& height) {
        int s= 0 ;
        int end = height.size()-1;
        int ans =0;
        while(s < end){ 
            int area = min(height[s],height[end]) * (end - s );
            ans = max(area,ans);
            if(height[s]<height[end]){
                s++;
            }else{
                end--;
            }
        }
        return ans;
    }
};