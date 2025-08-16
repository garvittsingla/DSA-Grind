class Solution {
public:
    long long totalhourstaken(vector<int>& nums, long long k) {
        long long totalhours = 0;
        for (long long bananas : nums) {
            totalhours += bananas / k;
            if (bananas % k) {
                totalhours += 1;
            }
        }
        return totalhours;
    }

    int findmax(vector<int>& nums) {
        long long largest = nums[0];
        for (int x : nums) {
            largest = max(largest, (long long)x);
        }
        return (int)largest;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = findmax(piles);
        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long hours = totalhourstaken(piles, mid);

            if (hours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return (int)ans;
    }
};
