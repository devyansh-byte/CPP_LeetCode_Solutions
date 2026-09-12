class Solution {
public:
    bool check(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int max=INT_MAX;
        int idx=0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
             max=arr[0];
             idx=i-1;
          count++;
            } 
          if(arr[i] > max) return false;
         //   else if(arr[i]==max && idx!=0) return false;
        }
        if(count<2) return true;
        else return false;
    }
};