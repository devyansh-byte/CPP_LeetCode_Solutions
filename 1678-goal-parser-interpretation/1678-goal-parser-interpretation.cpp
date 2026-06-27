class Solution {
public:
    string interpret(string arr) {
        string ans;
           int n=arr.size();
           for(int i=0;i<n;i++){
            if(arr[i]=='G') ans.push_back('G');
            if(arr[i]=='(' && arr[i+1]==')') ans.push_back('o');
              if(arr[i]=='(' && arr[i+1]!=')'){
                 ans.push_back('a');
                 ans.push_back('l');
              } 
           }
           return ans;
    }
};