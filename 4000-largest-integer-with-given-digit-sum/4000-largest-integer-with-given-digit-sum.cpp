class Solution {
public:
    int largestInteger(int n, int s) {
        //solution is of greedy approach
        string ans="";
        if(s==0) return 0;
        if(s>9*n) return -1;
        for(int i=0;i<n;i++){
            if(s>=9){
                ans+='9';
                s-=9;
            }
            else{
                ans+=to_string(s);
                s=0;
            }
        }
        return stoi(ans);
    }
};