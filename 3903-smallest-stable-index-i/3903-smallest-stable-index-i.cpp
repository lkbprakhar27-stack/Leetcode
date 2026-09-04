class Solution {
public:
    int stablecalc(vector<int>& nums, int i) {
        int leftMax  = *max_element(nums.begin(), nums.begin() + i + 1); 
        int rightMin = *min_element(nums.begin() + i, nums.end());       
        return leftMax - rightMin;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (stablecalc(nums, i) <= k) {
                return i;
            }
        }
        return -1;
    }
};