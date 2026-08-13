class Solution {
public:
    int reverse(int x) {
        long long int reversenum=0;{
            while(x!=0){
                reversenum=reversenum*10+x%10;
                x=x/10;
                 if(reversenum>=INT_MAX||reversenum<=INT_MIN){
                    return 0;
                }
            }
        }
        return reversenum;
    }
};