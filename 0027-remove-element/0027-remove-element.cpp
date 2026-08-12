class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n=arr.size();
        int j=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=val){
                count++;
                arr[j]=arr[i];
                j++;
            }
        }
    return count;
    }
};