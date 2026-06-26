class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pvt=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                pvt=i;
                break;
            }
        }
        if(pvt!=-1){//means there is ch in string so we reverse 
      reverse(word.begin(),word.begin()+pvt+1);
        }
        return word;
    }
};