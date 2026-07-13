class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str=countAndSay(n-1);//peeche se aayega recursion lagane se .
        string ans="";
        char ch=str[0];
        int freq=1;
        //3322251->23 32 15 11
        for(int i=1;i<str.size();i++){
          char dh=str[i];
          if(ch==dh) freq++;
       else{
          ans+=(to_string(freq)+ch);
          freq=1;
          ch=dh;
       }
        }
         ans+=(to_string(freq)+ch);/*as last bala jo char hoga usme else chal jayega aur peeche bala ka freq and ch add hojayega but iska to kuch na hoga as loop break but freq =1 ban jayegi loop check hone se pahele
         and ch bhi last charcter hojayega to extra add karna last mae */
         return ans;
    }
};