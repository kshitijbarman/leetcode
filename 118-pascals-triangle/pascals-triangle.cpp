class Solution {
public:
    vector<vector<int>> generate(int n) {
       vector<vector<int>> v;

       for(int i=0; i<n; i++) {
           vector<int> k(i+1, 1);   

           for(int j = 1; j < i; j++) {
               k[j] = v[i - 1][j] + v[i - 1][j - 1];  
           }

           v.push_back(k);
       }

       return v;
    }
};