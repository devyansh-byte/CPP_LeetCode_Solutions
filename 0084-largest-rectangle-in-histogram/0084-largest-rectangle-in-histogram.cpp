class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        vector<int> pse(n);
        vector<int> nse(n);
        pse[0]=-1;
        nse[n-1]=n;
        stack<int> st;
        st.push(0);
        for(int i=1;i<n;i++){
            while(st.size()!=0 && arr[st.top()]>=arr[i]) st.pop();
            if(st.size()==0) pse[i]=-1;
            else pse[i]=st.top();
                st.push(i);
        }
          stack<int> pt;
          for(int i=n-1;i>=0;i--){
             while(pt.size()!=0 && arr[pt.top()]>arr[i]) pt.pop();
            if(pt.size()==0) nse[i]=n;
            else nse[i]=pt.top();
                pt.push(i);
          }
          int maxarea=0;
          for(int i=0;i<n;i++){
            nse[i]=nse[i]-pse[i]-1;
          maxarea=max(maxarea,(nse[i]*arr[i]));
          }
          return maxarea;

    }
};