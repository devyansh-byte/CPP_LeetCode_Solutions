class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        if(n==2) return "";
        int close=0;
        int open=0;
        int strtidx=0;
        for(int i=0;i<n;i++){
        if(s[i]=='(') open++;
        if(s[i]==')') close++;
        if(open==close){
            s[strtidx]='0';
            s[i]='0';
            strtidx=i+1;
            open=0;
            close=0;
        }
        }
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]!='0') ans+=s[i];
        }
        return ans;
    }
};