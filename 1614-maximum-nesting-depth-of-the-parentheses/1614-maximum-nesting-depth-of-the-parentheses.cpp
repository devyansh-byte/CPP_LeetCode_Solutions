class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0;
        int maxcount=0;
        int add=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                add++;
                if(add>maxcount) maxcount=add;
            }
            else if(s[i]==')'){
                add--;
            }
        }
        return maxcount;
    }
};