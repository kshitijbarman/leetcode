class Solution {
public:
    int findDuplicate(vector<int>& v) {
       sort(v.begin(), v.end());  
        for (int i=0; i<v.size(); i++) {
            if (v[i]==v[i+1]) {
                return v[i];  
            }
        }
        return -1;
    }
};