class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        //brute force solution.
        int n=arr.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(arr[i]>0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        // one containing positive ele and other negative.
        vector<int> ans;
        for(int i=0;i<n/2;i++){
           ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};