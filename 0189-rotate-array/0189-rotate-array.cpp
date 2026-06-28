class Solution {
public:
void rev(vector<int>&v,int i,int j){
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++,j--;
    }
    return;
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return;
          if(k>n) k=k%n;
        rev(nums,n-k,n-1);
       if(n%2!=0) rev(nums,0,n-k-1);
       else rev(nums,0,n-k-1);
        rev(nums,0,n-1);
        return;
    }
};