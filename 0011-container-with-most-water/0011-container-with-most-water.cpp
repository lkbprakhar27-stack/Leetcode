class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int maxresult = 0;

        while (start < end) {
            int width = end - start;
            int currArea = min(height[start], height[end]) * width;
            maxresult = max(maxresult, currArea);

            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }
        return maxresult;
    }
};