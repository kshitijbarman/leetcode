class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        vector<int> ans;
        sort(v.begin(), v.end()); 
        int c=1;  
        int cd=1; 

        for (int i=0; i<v.size(); i++) 
        {  
            if (i > 0 && v[i] == v[i-1]) 
            {
                continue;
            }

            while (c < v[i]) {
                ans.push_back(c); 
                c += cd;          
            }
            c = v[i] + cd;
        }

        while (c <= v.size()) {
            ans.push_back(c);
            c += cd;
        }
        return ans;
    }
};