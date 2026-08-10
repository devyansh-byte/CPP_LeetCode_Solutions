class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        sort(arr.begin(),arr.end());
          int n=arr.size();
          if(n==1) return arr;
          if(n==2){
             vector<int> v(1);
            if(arr[0]==arr[1]){
                v[0]=arr[0];
                return v;
            }
            else return arr;
          }
        vector<int> ans;
        int count=1;
        bool flag=true;
        for(int i=1;i<n;i++){
           if(arr[i]==arr[i-1]){
            count++;
            if(count>n/3 && flag==true){
                ans.push_back(arr[i-1]);
                flag=false;
            }
           }
           else{//different number hit kiya
           flag=true;
           count=1;
           }
        }
   return ans;
    }
};