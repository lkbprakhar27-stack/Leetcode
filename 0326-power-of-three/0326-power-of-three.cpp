class Solution {
public:
    bool isPowerOfThree(int n) {
        long long int x=1;
        if(n<=0){
            return false;
        }
        while(x<n){
            x*=3;
        }
        return x==n;
    }
};