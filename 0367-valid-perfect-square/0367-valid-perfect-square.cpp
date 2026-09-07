class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        double x=2.0;
       for(int i=0;i<num;i++){
        if((double)num/x==x) return true;
       else if((double)num/x < x) return false;
       else x++;
       }
       return false;
    }
};