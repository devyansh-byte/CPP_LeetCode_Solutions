class Solution {
public:
    vector<int> buildArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=arr[arr[i]];
        }
        return ans;
    }
};