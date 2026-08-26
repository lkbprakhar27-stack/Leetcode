class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int max_val = *max_element(nums.begin(), nums.end());
        int min_val = *min_element(nums.begin(), nums.end());

        vector<int> count(max_val - min_val + 1, 0);
        for (int i = 0; i < n; i++) {
            count[nums[i] - min_val]++;
        }
        for (int i = 0; i < n; i++) {
            if (count[nums[i] - min_val] == 1) {
                return nums[i];
            }
        }
        return -1; 
    }
};