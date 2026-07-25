class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        int row=arr.size();
        int i=0;
        int j=0;
        vector<vector<int>> ans;
        vector<int> temp(2);
         temp[0]=arr[i][j];
        temp[1]=arr[i][j+1];
       while(i<row-1){
        if(temp[1]>=arr[i+1][j] ){
             temp[1]=max(temp[1],arr[i+1][j+1]);
             i++;
        }
       
        else{
            ans.push_back(temp);
            temp[0]=arr[i+1][0];
            temp[1]=arr[i+1][1];
            i++;
        }
        
       }
     ans.push_back(temp);
       
      
        
             return ans;
    }
};