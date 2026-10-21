class Solution {
public:
    int lengthOfLastWord(string s) {
    int end=s.length()-1;
    int count=0;
    int i=end;
     while( i>=0 && s[i]==' '){
        i--;
     }
     while(i>=0&&s[i]!=' '){
       count++;
       i--;
     }
    return count; 
    }
};