class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int i=0;
        for(auto it: v)
        {
            if(i==0 || i==1||v[i-2]!=it)
            {
                v[i]=it;
                i=i+1;
            }
        }
        return i;
    }
};