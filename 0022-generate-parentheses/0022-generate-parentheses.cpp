class Solution {
public:
void generate(string s, vector<string>& ans,int open,int close,int n){
    if(close==n){
        ans.push_back(s);
    }
    if(open<n)generate(s+'(',ans,open+1,close,n);
    if(close<open) generate(s+')',ans,open,close+1,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("",ans,0,0,n);
      return ans;
    }
};