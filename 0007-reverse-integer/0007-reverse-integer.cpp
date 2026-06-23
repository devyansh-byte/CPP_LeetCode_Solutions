class Solution {
public:
    int reverse(int x) {
        long long y = abs((long long)x);
        string s = to_string(y);
        
        // Reverse the string
        int i = 0, j = s.size() - 1;
        while(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
        // Use stoll to convert to long long first to safely check overflow
        long long res = stoll(s);
        
        if (x < 0) res = -res;
        
        // Explicitly check for 32-bit integer limits
        if (res > INT_MAX || res < INT_MIN) return 0;
        
        return (int)res;
    }
};