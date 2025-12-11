class Solution {
    public int[] nsl(int[] nums){
        int[] ans = new int[nums.length];
        Stack<Integer> st= new Stack<>();
        for(int i = 0 ; i < nums.length ; i++){
            int ele = nums[i];
            ans[i]=-1;
            while(st.size()!=0){
                if(nums[st.peek()]>=ele){
                    st.pop();
                }else{
                    ans[i] = st.peek();
                    break;
                }
            }
            st.push(i);
        }
        return ans;
    }
     public int[] nsr(int[] nums){
        int[] ans = new int[nums.length];
        Stack<Integer> st= new Stack<>();
        for(int i = nums.length -1 ; i >= 0 ; i--){
            int ele = nums[i];
            ans[i]=-1;
            while(st.size()!=0){
                if(nums[st.peek()]>=ele){
                    st.pop();
                }else{
                    ans[i] = st.peek();
                    break;
                }
            }
            st.push(i);
        }
        return ans;
    }
    public int helper(int[] nums,int[] left,int[] right){
        int area = 0;
        for(int i = 0 ; i < nums.length ; i++){
            int leftidx = (left[i]==-1 ) ? 0 : left[i]+1;
            int rightidx = (right[i]==-1 ) ? nums.length : right[i];
            int width = rightidx - leftidx;
            int temp = width * nums[i];
            area = Math.max(area,temp);
        }
        return area;
    }
    public int maximalRectangle(char[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] prefixmatrix = new int[rows][cols];
        for(int j = 0 ; j < cols ; j++){
            int sum = 0;
            for(int i = 0 ; i < rows ; i++){
                int ele = matrix[i][j] - '0';
                if(ele!=0){
                    sum+=ele;
                }else{
                    sum = 0;
                }
                prefixmatrix[i][j] = sum;
            }
        }
        int maxarea = 0;
        for(int i = 0; i < rows ; i++){
            int[] left = nsl(prefixmatrix[i]);
            int[] right = nsr(prefixmatrix[i]);
            int temp = helper(prefixmatrix[i],left,right);
            maxarea = Math.max(maxarea,temp);

        }
        return maxarea;
    }
}