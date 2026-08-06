
bool isPalindrome(int x) {
    long long int originalnum=x;
    long long int reversednum=0;
    if(x==0){
        return true;
    }
            while(x!=0 &&x>0 ){
                int digit=x%10;
                reversednum=reversednum*10+digit;
                x=x/10;
            if(reversednum==originalnum){
                return true;
            }
             }
return false;
}