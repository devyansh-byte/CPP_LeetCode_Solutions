class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        double x=(double)n;
        while(x>=1.0){
            if(x==1.0) return true;
            x=x/2.0;
        }
        return false;
    }
};