class Solution {
public:
    double myPow(double x, int n) {
        double d;
        if(n==0) return 1;
        if(n>0) return pow(x,n);
        if(n<0){
            x=(1/x);
            d=-1*(double)n;
            return pow(x,d);
        }
        return n;
    }
};
