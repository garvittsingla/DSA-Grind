class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(),0);
        for(int i = 0 ; i < boxes.length() ; i++){
            int current = boxes[i]-'0';
            int moves = 0;
            for(int j = 0 ; j < boxes.length() ; j++){
                if(i == j) continue;
                if(boxes[j]=='1'){
                    moves += abs(j-i);
                }
            }
            ans[i] = moves;
        }
        return ans;
    }
};