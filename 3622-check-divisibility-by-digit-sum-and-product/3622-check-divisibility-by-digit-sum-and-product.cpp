class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int sum=0;
        int pro=1;
        while(x!=0){
           int y=x%10;
           sum+=y;
           pro*=y;
         x=x/10;
        }
        if(n%(sum+pro)==0) return true;
        else return false;
    }
};