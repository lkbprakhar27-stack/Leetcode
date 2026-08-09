class Solution {
public:
    bool isPalindrome(string s) {
    string ch;
    for(int i=0;i<s.size();i++){
        if('A'<=s[i] && s[i]<='Z'){
            ch.push_back('a' + (s[i]-'A'));
        }else if('a'<=s[i] && s[i]<='z'){
            ch.push_back(s[i]);
        }else if('0'<=s[i] && s[i]<='9'){
            ch.push_back(s[i]);
        }
        // anything else: skip, don't push_back
    }

    int n = ch.size();
    for(int i=0;i<n;i++){
        if(ch[i] != ch[n-1-i]){
            return false;
        }
    }
    return true;
}
};