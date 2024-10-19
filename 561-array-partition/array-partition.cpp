class Solution {
public:
    int arrayPairSum(vector<int>& v) {
     sort(v.begin(), v.end());
    int Sum = 0;
    for (int i=0; i<v.size(); i+=2) {
        Sum = Sum + v[i];
    }
    return Sum;
    }
};