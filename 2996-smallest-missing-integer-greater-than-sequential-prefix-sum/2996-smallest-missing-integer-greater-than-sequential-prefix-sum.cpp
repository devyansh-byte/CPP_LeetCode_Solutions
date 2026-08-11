class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n=arr.size();
       // if(n==1) return arr[0]+1;
        int sum=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==1){
               sum+=arr[i];
            }
            else break;
        }
        sort(arr.begin(),arr.end());
          for(int i=0;i<n;i++){
            if(arr[i]==sum) sum+=1;
        }
 return sum;
    }
};