class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums1[i]);
        }
         for(int i=0;i<m;i++){
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(),nums.end());
        int y=nums.size();
        if(y%2==0){
            double median=(nums[y/2]+nums[((y/2)-1)])/2.0;
            return median;
        }
        else{
            double median=nums[(y)/2];
            return median;
        }
        return 0;
    }
};