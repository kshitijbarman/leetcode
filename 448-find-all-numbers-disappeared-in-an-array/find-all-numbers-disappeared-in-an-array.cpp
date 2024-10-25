class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
         vector<int> ans;
        for (int i=0; i<v.size(); i++) 
        {
            int in = abs(v[i]) - 1; 
            if (v[in]>0) {
                v[in]= -v[in]; 
            }
        }

       
        for (int i=0; i<v.size(); i++)
         {
            if (v[i]>0) 
            {
                ans.push_back(i + 1);  
            }
        }

        return ans;
    }
};