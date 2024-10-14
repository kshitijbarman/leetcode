class Solution {
public:
    bool isPalindrome(int x) {
        long r=0;
        int y=x;
        while(y>0)
        {
         r=r*10+(y%10);
        y=y/10;
        }
        if(r==x)  return 1;
        else return 0;
        
    }
};