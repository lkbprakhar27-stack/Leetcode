class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        res=res^nums.size();
        for(int i=0;i<nums.size();i++){
            res=res^i^nums[i];
        }
        return res;
    }
};