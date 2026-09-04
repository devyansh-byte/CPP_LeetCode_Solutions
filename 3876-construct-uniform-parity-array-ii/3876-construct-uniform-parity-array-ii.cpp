class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());//compulsory part.
        if(n==1) return true;
        bool flag=true;
        bool flag1;
        if(arr[0]%2==0) flag1=true;
        else flag1=false;
        //true is for all element of array are even and false for odd.
        if(flag1==true){ //check if all other ele even or not.
        for(int i=1;i<n;i++){
            if(arr[i]%2!=0){//element even nahi hai
               if(arr[i]-arr[0]<1 || (arr[i]-arr[0])%2!=0 ) flag=false;
            }
        }
        }
        else{
             for(int i=1;i<n;i++){
            if(arr[i]%2==0){//element even hai
               if(arr[i]-arr[0]<1 || (arr[i]-arr[0])%2==0 ) flag=false;
            }
        }
        }
        if(flag==false) return false;
        else return true;
    }
};