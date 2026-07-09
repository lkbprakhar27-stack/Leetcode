class Solution {
public:
    bool uniqueOccurrences(vector<int> & arr) {
         int n= arr.size();
         vector<int> count(2001,0);
         for(int i=0;i<n;i++){
            int idx=1000+arr[i];
           count[idx]++;
       }
       vector<int> nonzero;
         for(int i=0;i<count.size();i++){
            if (count[i]!=0){
            nonzero.push_back(count[i]);
            }
        }
        sort(nonzero.begin(), nonzero.end());
        for(int i=0; i<(int)nonzero.size()-1; i++){
           if(nonzero[i] == nonzero[i+1]){
            return false;  
           }
        }
     return true;   
    }
};