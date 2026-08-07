
class Solution {
public:
bool BinarySearch(vector<int>& arr,int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return true; // this will return the index of the key if we find it in the array
        }
        else if(arr[mid]>key){// 1 st half
            end=mid-1; // this will update the end index to mid-1 because we are searching in the left half of the array
        }
        else{// 2nd half
            start=mid+1; // this will update the start index to mid+1 because we are searching in the right half of the array
        }
    }
    return false;

}
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
     sort(nums.begin(),nums.end());
     for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            result.push_back(nums[i]);
            break;
        }
    }
     for(int i=1;i<=n;i++){
        if(!BinarySearch(nums,n,i)){
             result.push_back(i);
        }
     }
    return result;
    
    }
};