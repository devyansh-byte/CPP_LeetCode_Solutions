class Solution {
public:
    int minimumPushes(string arr) {
        int n=arr.size();
          int count=8;
        if(n<9) return n;
        else{
            n=n-8;
            if(n<9){
                count=count+(n*2);
                return count;
            }
            else{
                 count=count+(8*2);
                 n=n-8;
                 if(n<9){
                    count=count+(n*3);
                 } 
                 else{
                     count=count+(8*3);
                     n=n-8;
                     count=count+(n*4);
                 }
            }

        } 
        return count;
        
    }
};