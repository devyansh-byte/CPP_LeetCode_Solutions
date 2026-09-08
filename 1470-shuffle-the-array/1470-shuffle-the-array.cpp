class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int> ans(arr.size());
        int k=0;
        int i=0;
        int j=n;
        while(j<arr.size()){
            ans[k++]=arr[i];
            ans[k++]=arr[j];
            i++;
            j++;
        }
        return ans;
    }
};