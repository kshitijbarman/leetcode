class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {

    for (int i=0; i<v.size(); i++) {
       
        for (int j=i+1; j<=i+k && j<v.size(); j++) {
            if (v[i] == v[j]) {
                return true;
            }
        }
    }
    return false;
    }
};