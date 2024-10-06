class Solution {
public:
    int findPeakElement(vector<int>& v) {
        
         if(v.size()==1) return 0;
        if(v[0]>v[1]) return 0;
         if(v[ v.size()-1]>v[ v.size()-2]) return  v.size()-1;
         
         int low = 1;
        int high = v.size()-2;
        while(low<=high)
        {
            int mid= low + (high-low)/2;
            if(v[mid]>v[mid-1] && v[mid]>v[mid + 1])
            {
                return mid;
            }
            else if(v[mid]  < v[mid-1])
            {
                high=mid-1;
            }
              else if(v[mid]  < v[mid+1])
            {
                low=mid+1;
            }
        }
        return -1;
    }
};