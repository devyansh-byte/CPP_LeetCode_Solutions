class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
          int n=arr.size();
          if(n==1){
            if(arr[0]>1 || arr[0]<=0) return 1;
            else return arr[0]+1; 
          }
          bool flag=true;
          for(int i=1;i<n;i++){
            if(arr[i-1]>=0 && arr[i]>=0){
                if(flag==true && arr[i-1]>1 && arr[i-1]!=0) return 1;
                flag=false;
               if(arr[i]-arr[i-1]==1 || arr[i]-arr[i-1]==0) continue;
               else return arr[i-1]+1;
            } 
          }
          if(flag==true && (arr[n-1]<0 || arr[n-1]>1)) return 1;
          return arr[n-1]+1;
    }
};