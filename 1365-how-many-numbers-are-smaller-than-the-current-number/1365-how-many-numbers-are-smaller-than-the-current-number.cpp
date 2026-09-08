class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[j]<arr[i]) count++;
            }
            ans[i]=count;
        }
        return ans;
    }
};