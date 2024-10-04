class Solution {
public:
    int search(vector<int>& v, int target) {
        int s=0;
        int e=v.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(v[mid]==target)
            {
                return mid;
            }
            if(v[s]<=v[mid])
            {
                if(v[s]<=target && target <=v[mid])
                {
                    e=mid-1;
                }
                else{
                   s= mid+1;
                }
            }
            else{
                if(v[mid]<=target && target <=v[e])
                {
                    s= mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};