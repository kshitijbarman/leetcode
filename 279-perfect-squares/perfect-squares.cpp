class Solution {
public:
    int numSquares(int n) {
         int v[n+1];
        v[0] = 0;
        
        for(int i=1;i<=n;++i)
        {
            v[i] = i;
            for(int j=1;j*j<=i;++j)
            {
                int s = j*j;
                v[i] = min(v[i],1+v[i-s]);
            }
        }
        return v[n];
    }
};