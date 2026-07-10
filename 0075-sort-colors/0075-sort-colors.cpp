class Solution {
public:
    void sortColors(vector<int>& nums) {
   //i do this by dutch flag algo.
   int n=nums.size();
   int low=0;
   int mid=0;
   int high=n-1;
   while(mid<=high){
    if(nums[mid]==2) {
        swap(nums[high],nums[mid]);
        high--;
    }
   else if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        mid++;
        low++;
    }
    else mid++;
   }
   return;
    }
};