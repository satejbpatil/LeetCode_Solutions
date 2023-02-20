class Solution {
public:
    bool isPowerOfThree(int n) {
         long long p;
        if(n<0) return false;
        for(int i=0;i<n;i++){
            p=pow(3,i);
            if(p>n) return false;
            if(p==n) return true;
        }
        return p;
    }
};
