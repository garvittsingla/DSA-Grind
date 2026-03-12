class Solution {
public:
    long long minimumSteps(string s) {
        long long swaps = 0;
        int right = s.size()-1;
        int left = 0;
        while(left < right){
            if(s[left]=='1' && s[right]=='0'){
                //swap(s[left],s[right]);
                swaps += (right-left);
                left++;
                right--;
            }else if(s[left]=='0'){
                left++;
            }else{
                right--;
            }
        }
        return swaps;
    }
};