class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int possible = 1;
        int i =0;
        while(missing.size() <= k){
            if(i <= arr.size() -1 && arr[i]==possible){
                i++;
                possible++;
            }else{
                missing.push_back(possible);
                possible++;
            }
        }
        for(int i = 0 ; i < missing.size() ; i++){
            cout << missing[i] << endl;
        }
        return missing[k-1];
    }
};