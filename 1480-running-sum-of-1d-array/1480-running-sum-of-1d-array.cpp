class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n=arr.size();
        int sum=arr[0];
        for(int i=1;i<n;i++){
          sum+=arr[i];
          arr[i]=sum;
        }
        return arr;

    }
};