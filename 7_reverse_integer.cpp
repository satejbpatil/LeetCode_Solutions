class Solution {
public:
    int reverse(int x) {
        long long a=abs(x);
        long long q;
        long long t=0;
        int ans=0;
        while(a!=0){
            q=a%10;
            t=t*10+q;
            if(t>INT_MAX || t<INT_MIN) return 0;
            a=a/10;
        }
        if(x<0){
            return t*(-1);
        }
        if(t<(2^31 -1)||t>(-2^31)) return t;
        return 0;
    }
};
