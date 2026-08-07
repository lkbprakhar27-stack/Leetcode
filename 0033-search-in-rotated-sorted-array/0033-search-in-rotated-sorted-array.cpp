class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Left half [start..mid] is sorted
            if (nums[start] <= nums[mid]) {
                if (nums[start] <= target && target < nums[mid]) {
                    end = mid - 1;      // target lies in left half
                } else {
                    start = mid + 1;    // target must be in right half
                }
            }
            // Right half [mid..end] is sorted
            else {
                if (nums[mid] < target && target <= nums[end]) {
                    start = mid + 1;    // target lies in right half
                } else {
                    end = mid - 1;      // target must be in left half
                }
            }
        }
        return -1;
    }
};