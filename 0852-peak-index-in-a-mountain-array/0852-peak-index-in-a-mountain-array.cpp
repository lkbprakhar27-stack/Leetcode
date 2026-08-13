class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int st=0;
        int end=n-1;
        while(st<end){
            if(arr[st]<arr[end]){
                st++;
            }else if(arr[st]==arr[end]){
                st++;
                end--;
            }else{
                end--;
            }
        }
        return st;
    }
};