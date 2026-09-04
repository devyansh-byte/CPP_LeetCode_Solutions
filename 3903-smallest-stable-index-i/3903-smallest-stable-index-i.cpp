class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n=arr.size();
        int ans=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++){
            int max1=*max_element(arr.begin(), arr.begin() + i + 1);
            int min1=*min_element(arr.begin() + i, arr.end());
            if((max1-min1)<=k) return i;
        }
        return -1;
    }
};