class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long mid=0;
        while(start<=end)
        {
          mid=start+(end-start)/2;
          if(mid*mid==x) return mid;
          else if(mid*mid>x)
          {
            end=mid-1;
          }
          else  start = mid+1;
        }
        return end;
    }
};