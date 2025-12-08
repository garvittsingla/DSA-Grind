class Solution {
    public int[] nsr(int[] nums){
        int size = nums.length;
        Stack<Integer> st = new Stack<>();
        int[] ans = new int[size];
        for(int i = size- 1; i >= 0 ; i--){
            int ele = nums[i];
            ans[i] = -1;
            while(!st.empty()){
                int top = st.peek();
                if(nums[top]>=ele){
                    st.pop();
                }else{
                    ans[i] = top;
                    break;
                }
            }
            st.push(i);
        }
        return ans;
    }
    public int[] nsl(int[] nums){
        int size = nums.length ;
        Stack<Integer> st = new Stack<>();
        int[] ans = new int[size];
        for(int i = 0 ; i < size ; i++){
            int ele = nums[i];
            ans[i]=-1;
            while(!st.empty()){
                int top = st.peek();
                if(nums[top]>=ele){
                    st.pop();
                }else{
                    ans[i] = top;
                    break;
                }
            }
            st.push(i);
        }
        return ans;
    }
    public int largestRectangleArea(int[] heights) {
        int[] nsr = nsr(heights);
        int[] nsl = nsl(heights);
        int maxarea = 0;
        for(int i = 0 ;i < heights.length ; i++){
            int left = (nsl[i]  == -1 )? 0 : nsl[i] + 1;
            int right = (nsr[i] == -1) ?  heights.length : nsr[i];
            int width =  right - left ;
            int area = width * heights[i];
            maxarea = Math.max(maxarea,area);
        }
        return maxarea;
    }
}