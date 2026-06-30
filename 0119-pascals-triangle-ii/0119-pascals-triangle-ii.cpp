class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<vector<int>> v; // To store the whole Pascal's triangle
        
        // Fix 1: Change to i <= n so we actually reach the requested row
        for(int i = 0; i <= n; i++){
            vector<int> a(i + 1); // Create a row of size i + 1
            v.push_back(a);       // Push it into our 2D grid
            
            for(int j = 0; j <= i; j++){
                // Outer edges are always 1
                if(j == 0 || i == j){
                    v[i][j] = 1;
                }
                // Middle elements are sum of two elements above
                else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
            }
        }
        
        // Fix 2: Simply return the very last row we built in our 2D vector
        return v[n]; 
    }
};