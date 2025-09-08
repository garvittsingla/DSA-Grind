class Solution {
public:
    bool haszero(int n){
        while(n!=0){
            int rem = n%10;
            if(rem == 0) return true;
            n = n/10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i= 1; i < n ; i++){
            int a = i;
            int b = n-a;
            if(!haszero(a)  && !haszero(b))return {a,b};
            
        }
        return {0,0};
    }
};