class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = n - 2;
        
        // Step 1: Find the pivot
        while (k >= 0 && nums[k] >= nums[k + 1]) {
            k--;
        }
        
        if (k < 0) {
            // Step 2: Array is strictly decreasing, reverse it entirely
            reverse(nums.begin(), nums.end());
        } else {
            // Step 3: Find the successor
            int l = n - 1;
            while (l > k && nums[l] <= nums[k]) {
                l--;
            }
            // Step 4: Swap and reverse suffix
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
        
    }
};