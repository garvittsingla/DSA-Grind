class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       int maxarea = 0;
       int size = heights.size();
       stack<int> st;
       vector<int> prevsmaller(size,-1);
       for(int i = 0 ; i < heights.size() ; i++){
        int ele = heights[i];
        while(!st.empty()){
            if(heights[st.top()]>=ele){
                st.pop();
            }else{
                prevsmaller[i] = st.top();
                break;
            }
        }
        st.push(i);
       }

        st = stack<int>();
        vector<int> nextsmaller(size,-1);
        for(int i = size-1 ; i >= 0 ; i--){
            int ele = heights[i];
            while(!st.empty()){
                if(heights[st.top()]>=ele){
                    st.pop();
                }else{
                    nextsmaller[i] = st.top();
                    break;
                }
            }
            st.push(i);
        }


        for(int i = 0 ; i < size ; i++){
            int prev = prevsmaller[i];
            int next = nextsmaller[i];
            int ele = heights[i];

            int start = 0;
            int end = 0;
            if(prev == -1) start = 0;
            else start = prev+1;
            if(next == -1) end = size;
            else end = next;

            int width = end -start;
            int area = width * ele;
            maxarea = max(maxarea,area);



        }
       return maxarea;
    }
};