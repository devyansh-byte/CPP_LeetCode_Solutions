class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<q.size();i++){
            int count=0;
            int sum=0;
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
                if(sum<=q[i]) count++;
            }
            q[i]=count;
        }
        return q;
    }
};