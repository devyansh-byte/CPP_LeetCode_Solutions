class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k=0;
        if(arr.size()==1) return 1;
        int i=0;
        int j=1;
        int count=0;
        while(j<arr.size()){
            if(arr[i]==arr[j]) j++;
            else{
               arr[k++]=arr[i];
               i=j;
               j++;
               count++;
            }
        }
        arr[k++]=arr[i];
        return count+1;
    }
};