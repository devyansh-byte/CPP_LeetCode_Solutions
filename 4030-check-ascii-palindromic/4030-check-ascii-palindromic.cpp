class Solution {
public:
    bool isPalindromic(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            bitset<8> bin(s[i]);
            ans = ans + bin.to_string();
        }
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j]) return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};