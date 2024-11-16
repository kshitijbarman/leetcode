class Solution {
public:
    int findPeakElement(vector<int>& n) {
         int low = 0, high = n.size()-1;

        while (low < high) {
            int mid = low + (high-low)/2;

            if (n[mid] > n[mid+1])
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};