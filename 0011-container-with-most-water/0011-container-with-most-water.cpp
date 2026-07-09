class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int max=0;
        int tempmax=0;
        int i=0;
        int j=n-1;
        while(i<j){
            tempmax=min(arr[i],arr[j])*(j-i);
            if(arr[i]<=arr[j]) i++;
            else  j--;
            if(tempmax>max) max=tempmax;  
        }
        return max;
    }
};