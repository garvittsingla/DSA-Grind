class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int counter = 1;
        int missing = 1;
        int j =0;
        while(k > 0 ){
            // int i = 0;
            if(j < arr.size() && arr[j] == counter){
                j++;
                counter++;
            }else{
                missing = counter;
                counter++;
                k--;
            }
            cout << missing << endl;
            // k--;
        }
        return missing;
    }
};