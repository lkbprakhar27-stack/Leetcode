class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int org=n;
        while(n>0){
        count++;
        n=n/10;
        }
        if(count<4){
            return 0;
        }
        return org-999;
    }
};