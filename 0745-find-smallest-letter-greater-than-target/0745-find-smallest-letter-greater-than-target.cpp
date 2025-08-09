class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size()-1;
        int mid = start + (end-start)/2;

        char possible = letters[0];
        while(start<=end){
            if((int)letters[mid]>(int)target){
                possible = (int)letters[mid];
                end = mid-1;
            }else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return possible;
    }
};