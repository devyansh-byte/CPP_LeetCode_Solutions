class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int buy=INT_MAX;
        int profit=0;
        int maxprofit=0;
        for(int i=1;i<n;i++){
          if(buy>arr[i-1]){
            buy=arr[i-1];
          }
          profit=(arr[i]-buy);
          if(maxprofit<profit){
            maxprofit=profit;
          }
        }
        return maxprofit;
    }
};