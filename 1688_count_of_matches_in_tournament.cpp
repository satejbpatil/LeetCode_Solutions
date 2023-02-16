class Solution {
public:
    int numberOfMatches(int n) {
        int m=0;
        int z;
        while(n>1){
            z=n/2;
            m=m+z;
            n=n-z;
        }
        return m;
    }
};
