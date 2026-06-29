class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // 1. Find the pivot index
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // 2. If no pivot, reverse the whole array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 3. Find the element just greater than nums[idx]
        int idx2 = -1;
        for (int i = n - 1; i > idx; i--) {
            if (nums[i] > nums[idx]) {
                idx2 = i;
                break;
            }
        }

        // 4. Swap and then reverse the suffix
        swap(nums[idx], nums[idx2]);
        reverse(nums.begin() + idx + 1, nums.end());
    }
};