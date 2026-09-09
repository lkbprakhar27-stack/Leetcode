class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;                 
        vector<int> v1;

        for (int i = n - k; i < n; i++) {
            v1.push_back(nums[i]);
        }

        for (int i = 0; i < n - k; i++) {
            v1.push_back(nums[i]);
        }

        nums = v1;   
    }
};