class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        int last = m+n - 1;

        while (m>0 && n>0) {
            if (v1[m-1] > v2[n-1]) {
                v1[last] = v1[m-1];
                m--;
            } else {
                v1[last] = v2[n-1];
                n--;
            }
            last--;
        }

        while (n>0) {
            v1[last] = v2[n-1];
            n--;
            last--;
        }
    }
};
