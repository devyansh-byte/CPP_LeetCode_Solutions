class Solution {
public:
    int minimumPushes(string arr) {
        int n=arr.size();
        int count=0;
        int counter=0;
        for(int i=0;i<n;i++){
            if(counter<8) count++;
            else if(counter<16) count+=2;
            else if(counter<24) count+=3;
            else count+=4;
            counter++;
        }
    return count;
    }
};