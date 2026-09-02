class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int x=1;
        if(n<=0){
            return false;
        }
        while(x<n){
           x*=2;
        }
        return x==n;
    }
};