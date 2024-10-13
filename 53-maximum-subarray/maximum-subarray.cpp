class Solution {
public:
    int maxSubArray(vector<int>& v) {
    int sum = 0;
    int ans = v[0];

    for (int i = 0; i < v.size(); i++) {
        sum = sum + v[i]; 
        ans = max(ans, sum);    
        if(sum<0) sum=0;           
    }

    return ans;
    }
};