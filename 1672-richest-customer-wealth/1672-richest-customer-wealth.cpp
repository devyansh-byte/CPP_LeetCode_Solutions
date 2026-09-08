class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int r=arr.size();
        int c=arr[0].size();
        int maxsum=0;
        for(int i=0;i<r;i++){
            int sum=0;
            for(int j=0;j<c;j++){
              sum+=arr[i][j];
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};