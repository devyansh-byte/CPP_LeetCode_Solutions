class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n=arr.size();
        stack<int> st;
        vector<int> ans(n);
        st.push(arr[n-1]);
             ans[n-1]=0;
             for(int i=n-2;i>=0;i--){
                 int count=0;
                while(!(st.empty()) && st.top()<arr[i]){
                    count++;
                    st.pop();
                }
                if(!(st.empty())) count++;
                ans[i]=count;
                st.push(arr[i]);
             }
             return ans;
    }
};