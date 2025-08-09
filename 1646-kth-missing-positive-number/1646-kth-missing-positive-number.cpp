class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      vector<int> missing;
      int possible =1;
      int i= 0;
      while(missing.size() < k){
        if(i <= arr.size()-1 && arr[i]==possible){
            i++;
        }else{
            missing.push_back(possible);
        }
        possible++;
      }
      return missing[k-1];
    }
};