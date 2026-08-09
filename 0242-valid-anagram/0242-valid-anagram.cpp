class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        for (int i=0;i<n;i++){
            int idx=s[i]-'a';
            count[idx]++;
        }
        for (int i=0;i<m;i++){
            int idx=t[i]-'a';
            if(count[idx]==0){
                return false;
            }
            count[idx]--;
        }
        return true;
    }
};