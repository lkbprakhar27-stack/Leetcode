class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int mn = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(nums1[i] % 2 != 0) {
                mn = min(mn, nums1[i]);
            }
        }

        if(mn == INT_MAX) return true;

        for(int i = 0; i < n; i++) {
            if(nums1[i] % 2 == 0 && nums1[i] < mn) {
                return false;
            }
        }
        return true;
    }
};