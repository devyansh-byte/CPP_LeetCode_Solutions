class Solution {
public:
    string largestOddNumber(string arr) {
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            if((arr[i]-48)%2!=0) return arr; 
            else arr.pop_back();
        }
        return "";
    }
};