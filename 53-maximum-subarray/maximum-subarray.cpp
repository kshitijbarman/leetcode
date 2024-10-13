class Solution {
public:
    int maxSubArray(vector<int>& v) {
    int current_sum = v[0];
    int max_sum = v[0];

    for (int i = 1; i < v.size(); i++) {
        current_sum = max(v[i], current_sum + v[i]); 
        max_sum = max(max_sum, current_sum);               
    }

    return max_sum;
    }
};