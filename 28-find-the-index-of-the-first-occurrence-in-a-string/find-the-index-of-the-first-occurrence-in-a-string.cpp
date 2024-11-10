class Solution {
public:
    int strStr(string h, string n) {
        if (n.empty()) 
        {
            return 0;  
        }
        int a = h.size();
        int b = n.size();    
        if (b>a)
        {
             return -1; 
        }
        for (int i=0; i<=a-b; i++) {
            if (h.substr(i, b) == n) {
                return i;
            }
        }      
        return -1;  
    }
    
};