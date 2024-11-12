class Solution {
public:
    int thirdMax(vector<int>& n) {
        set<int>v;
        for(auto it:n)
        {
            v.insert(it);
        }
        if(v.size()>=3)
        {
            int a=v.size()-3;
            auto ans=next(v.begin(),a);
            return *ans;
        }
        return *--v.end();
    }
};