class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        while(n!=0){
            int ld=n%10;
            pro*=ld;
            sum+=ld;
            n=n/10;
        }
        return pro-sum;
    }
};