class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        n=n%2;
        if(n==0) return true;
        isPowerOfTwo(n);
        return false;
    }
};
