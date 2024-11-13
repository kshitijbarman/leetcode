class Solution {
public:
    bool isHappy(int n) {
        while (n>4) {
            n=sum(n);
        }
        return n==1;
    }
    int sum(int n) {
        int s=0,r;
        while (n>0) {
            r=n%10;
            s += r*r;
            n /=10;
        }
        return s;
    }
};